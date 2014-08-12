CKEDITOR.dialog.add( 'textbox', function( editor ) {
    return {
        title: Drupal.t('Edit Text Box'),
        minWidth: 200,
        minHeight: 100,
        contents: [
            {
                id: 'info',
                elements: [
                    {
                        id: 'align',
                        type: 'select',
                        label: 'Align',
                        items: [
                            [ editor.lang.common.notSet, '' ],
                            [ editor.lang.common.alignLeft, 'left' ],
                            [ editor.lang.common.alignRight, 'right' ],
                            [ editor.lang.common.alignCenter, 'center' ]
                        ],
                        setup: function( widget ) {
                            this.setValue( widget.data.align );
                        },
                        commit: function( widget ) {
                            widget.setData( 'align', this.getValue() );
                        }
                    },
                    // {
                    //     id: 'width',
                    //     type: 'text',
                    //     label: 'Width',
                    //     width: '50px',
                    //     setup: function( widget ) {
                    //         this.setValue( widget.data.width );
                    //     },
                    //     commit: function( widget ) {
                    //         widget.setData( 'width', this.getValue() );
                    //     }
                    // },
                     {
                        id: 'behaviour',
                        type: 'select',
                        label: 'Behaviour',
                        items: [
                            [ editor.lang.common.notSet, '' ],
                            [ 'Small floating box', 'floatbox' ],
                            [ 'Expanding - collapsed', 'expanding collapsed' ],
                            [ 'Expanding - expanded', 'expanding expanded' ]
                        ],
                        setup: function( widget ) {
                            this.setValue( widget.data.behaviour );
                        },
                        commit: function( widget ) {
                            widget.setData( 'behaviour', this.getValue() );
                        }
                    }
                ]
            }
        ]
    };
} );
