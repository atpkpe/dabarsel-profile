CKEDITOR.addTemplates( 'default',
{
imagesPath: CKEDITOR_BASEPATH + '../../themes/custom/atp_theme/images/' ,
templates :
  [
    {
        title: 'Tabel i indhold uden note',
        image: 'table1.png',
        description: '',
        html: '<table class="table1">'
        +'<thead>'
        +'<tr><th colspan="5">Omkostninger i 2013 og 2014</th></tr>'
        +'</thead>'
        +'<tbody>'
        +'<tr><td></td><th colspan="2">2014</th><th colspan="2">2013</th></tr>'
        +'<tr><td></td><td>Mio.</td><td>Pct.</td><td>Mio.</td><td>Pct.</td></tr>'
        +'<tr><td>Udbetalinger</td><td>00</td><td>00</td><td>00</td><td>00</td></tr>'
        +'<tr><td>Administration</td><td>00</td><td>00</td><td>00</td><td>00</td></tr>'
        +'<tr><td>Garantier</td><td>00</td><td>00</td><td>00</td><td>00</td></tr>'
        +'<tr><td>Investering</td><td>00</td><td>00</td><td>00</td><td>00</td></tr>'
        +'</tbody>'
        +'</table>'
    },
    {
        title: 'Tabel i indhold med note',
        image: 'table1.png',
        description: '',
        html: '<table class="table1 wnote">'
        +'<thead>'
        +'<tr><th colspan="5">Omkostninger i 2013 og 2014</th></tr>'
        +'</thead>'
        +'<tbody>'
        +'<tr><td></td><th colspan="2">2014</th><th colspan="2">2013</th></tr>'
        +'<tr><td></td><td>Mio.</td><td>Pct.</td><td>Mio.</td><td>Pct.</td></tr>'
        +'<tr><td>Udbetalinger</td><td>00</td><td>00</td><td>00</td><td>00</td></tr>'
        +'<tr><td>Administration</td><td>00</td><td>00</td><td>00</td><td>00</td></tr>'
        +'<tr><td>Garantier</td><td>00</td><td>00</td><td>00</td><td>00</td></tr>'
        +'<tr><td>Investering</td><td>00</td><td>00</td><td>00</td><td>00</td></tr>'
        +'</tbody>'
        +'</table>'
        +'<p class="note">Note: Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.</p>'
    },
    {
        title: 'Tabel fondsløsning',
        image: 'table2.png',
        description: '',
        html: '<h3>Omkostninger i 2013 og 2014</h3>'
        +'<table class="table2">'
        +'<thead>'
        +'<tr><td></td><th colspan="2">1. - 3. kvartal 2014</th><th colspan="2">2013</th></tr>'
        +'</thead>'
        +'<tbody>'
        +'<tr><td></td><td>Mio.</td><td>Pct.</td><td>Mio.</td><td>Pct.</td></tr>'
        +'<tr><td>Renter</td><td>22</td><td>0,22</td><td>22</td><td>0,22</td></tr>'
        +'<tr><td>Kredit</td><td>500</td><td>0,5</td><td>500</td><td>0,5</td></tr>'
        +'<tr><td>Aktier</td><td>5</td><td>5,0</td><td>5</td><td>5,0</td></tr>'
        +'<tr><td>Inflation</td><td>1.000</td><td>11,2</td><td>1.000</td><td>11,2</td></tr>'
        +'</tbody>'
        +'<tfoot>'
        +'<tr><td>Omkostninger i alt</td><td>1.527</td><td>20</td><td>1.527</td><td>20</td></tr>'
        +'</tfoot>'
        +'</table>'
    },
    {
        title: 'Tabel i indhold 2',
        image: 'table3.png',
        description: '',
        html: '<table class="table3">'
        +'<tbody>'
        +'<tr><td><h3>Afdækning</h3><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla quis mattis felis. Suspendisse magna felis, scelerisque accumsan dolor ut, suscipit faucibus velit. Nulla fermentum tristique dolor, id dapibus tortor congue eu. Morbi auctor volutpat tellus ac placerat.Vivamus ut consequat tellus. Sed vel feugiat neque, vel lobortis urna. Maecenas imperdiet.</p></td><td class="spacing">&nbsp;</td><td><h3>Investering</h3><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla quis mattis felis. Suspendisse magna felis, scelerisque accumsan dolor ut, suscipit faucibus velit. Nulla fermentum tristique dolor, id dapibus tortor congue eu. Morbi auctor volutpat tellus ac placerat.Vivamus ut consequat tellus. Sed vel feugiat neque, vel lobortis urna. Maecenas imperdiet.</p></td></tr>'
        +'</tbody>'
        +'</table>'
    }
  ]
});
