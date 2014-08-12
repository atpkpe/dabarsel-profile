
// Register the plugin within the editor.

CKEDITOR.plugins.add( 'textbox', {
    requires: 'widget',

    icons: 'textbox',

    init: function( editor ) {
        CKEDITOR.dialog.add( 'textbox', this.path + 'dialog.js' );

        editor.widgets.add( 'textbox', {

            button: 'Textbox',

            template:
                '<div class="textbox">' +
                    '<h2 class="textbox-title">' + Drupal.t('Title') + '</h2>' +
                    '<div class="textbox-content"><p>' + Drupal.t('Content...') + '</p></div>' +
                '</div>',

            editables: {
                title: {
                    selector: '.textbox-title',
                    allowedContent: 'br strong em a[name]'
                },
                content: {
                    selector: '.textbox-content',
                    allowedContent: 'p br ul ol li strong em a[!href,name]'
                }
            },

            allowedContent:
                'div(!textbox,align-left,align-right,align-center){width};' +
                'div(!textbox-content); h2(!textbox-title)',

            requiredContent: 'div(textbox)',

            dialog: 'textbox',

            upcast: function( element ) {
                return element.name == 'div' && element.hasClass( 'textbox' );
            },

            init: function() {
                var width = this.element.getStyle( 'width' );
                if ( width )
                    this.setData( 'width', width );
                if ( this.element.hasClass( 'align-left' ) )
                    this.setData( 'align', 'left' );
                if ( this.element.hasClass( 'align-right' ) )
                    this.setData( 'align', 'right' );
                if ( this.element.hasClass( 'align-center' ) )
                    this.setData( 'align', 'center' );

                if (  this.element.hasClass( 'expanding' ) && this.element.hasClass( 'expanded' ) )
                  this.setData( 'behaviour', 'expanding expanded' );

                if ( this.element.hasClass( 'expanding' ) && this.element.hasClass( 'collapsed' ) )
                  this.setData( 'behaviour', 'expanding collapsed' );

            },

            data: function() {

                if ( this.data.width == '' )
                    this.element.removeStyle( 'width' );
                else
                    this.element.setStyle( 'width', this.data.width );

                this.element.removeClass( 'align-left' );
                this.element.removeClass( 'align-right' );
                this.element.removeClass( 'align-center' );
                if ( this.data.align )
                    this.element.addClass( 'align-' + this.data.align );

                this.element.removeClass( 'expanding' );
                this.element.removeClass( 'expanded' );
                this.element.removeClass( 'collapsed' );
                if ( this.data.behaviour )
                  this.element.addClass( this.data.behaviour );


            }
        } );

        editor.ui.addButton('textbox', {
          label: Drupal.t('Create a text box'),
          command: 'textbox',
          icon: this.path + '/icons/textbox.png'
        });
    }
} );
