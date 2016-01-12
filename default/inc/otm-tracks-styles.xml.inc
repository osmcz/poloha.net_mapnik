<!-- Style for international hiking tracks. -->

<Style name="international-track">
  <Rule>
    &maxscale_zoom13;
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='3'/>
  </Rule>
</Style>

<Style name="international-track-shield">
  <Rule>
    <Filter>[length]=1</Filter>
    &maxscale_zoom13;
    &minscale_zoom20;
    <ShieldSymbolizer fontset-name="bold-fonts"
      size="&font_size_small;" placement="line"
      file="&symbols;/track-shield-1.png"  minimum-distance="10"
      spacing="800">[ref]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[length]=2</Filter>
    &maxscale_zoom13;
    &minscale_zoom20;
    <ShieldSymbolizer fontset-name="bold-fonts"
      size="&font_size_small;" placement="line"
      file="&symbols;/track-shield-2.png"  minimum-distance="10"
      spacing="800">[ref]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[length]=3</Filter>
    &maxscale_zoom13;
    &minscale_zoom20;
    <ShieldSymbolizer fontset-name="bold-fonts"
      size="&font_size_small;" placement="line"
      file="&symbols;/track-shield-3.png"  minimum-distance="10"
      spacing="800">[ref]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[length]=4</Filter>
    &maxscale_zoom13;
    &minscale_zoom20;
    <ShieldSymbolizer fontset-name="bold-fonts"
      size="&font_size_small;" placement="line"
      file="&symbols;/track-shield-4.png"  minimum-distance="10"
      spacing="800">[ref]</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[length]>=5</Filter>
    &maxscale_zoom13;
    &minscale_zoom20;
    <ShieldSymbolizer fontset-name="bold-fonts"
      size="&font_size_small;" placement="line"
      file="&symbols;/track-shield-5.png"  minimum-distance="10"
      spacing="800">[ref]</ShieldSymbolizer>
    </Rule>
</Style>

<!-- Style for guidepost and their names. -->
<Style name="guidepost">
  <Rule>
    <Filter>[information]='guidepost'</Filter>
    &maxscale_zoom17;
    <TextSymbolizer fontset-name="book-fonts" size="9"
      fill="#000000" dy="14" halo-radius="1"  vertical-alignment="bottom">[name]</TextSymbolizer>
  </Rule>
</Style>

<!-- Style for yellow hiking tracks. -->
<Style name="yellow-track">
  <Rule>
    &yellow_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='2'/>
  </Rule>
  <Rule>
    &yellow_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='3'/>
  </Rule>
</Style>


<!-- Style for red hiking tracks. -->
<Style name="red-track">
  <Rule>
    &red_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='2'/>
  </Rule>
  <Rule>
    &red_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='3'/>
  </Rule>
</Style>


<!-- Style for green hiking tracks. -->
<Style name="green-track">
  <Rule>
    &green_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='2'/>
  </Rule>
  <Rule>
    &green_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='3'/>
  </Rule>
</Style>


<!-- Style for blue hiking tracks. -->
<Style name="blue-track">
  <Rule>
    &blue_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='2'/>
  </Rule>
  <Rule>
    &blue_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='3'/>
  </Rule>
</Style>


<!-- Style for yellow hiking tracks together with red ones. -->
<Style name="yellow-red-track">
  <Rule>
    &yellow_red_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,0'/>
  </Rule>
  <Rule>
    &yellow_red_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,0'/>
  </Rule>
</Style>

<!-- Style for yellow hiking tracks together with green ones. -->
<Style name="yellow-green-track">
  <Rule>
    &yellow_green_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,0'/>
  </Rule>
  <Rule>
    &yellow_green_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,0'/>
  </Rule>
</Style>

<!-- Style for yellow hiking tracks together with blue ones. -->
<Style name="yellow-blue-track">
  <Rule>
    &yellow_blue_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,0'/>
  </Rule>
  <Rule>
    &yellow_blue_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,0'/>
  </Rule>
</Style>


<!-- Style for red hiking tracks together with green ones. -->
<Style name="red-green-track">
  <Rule>
    &red_green_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,0'/>
  </Rule>
  <Rule>
    &red_green_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,0'/>
  </Rule>
</Style>

<!-- Style for red hiking tracks together with blue ones. -->
<Style name="red-blue-track">
  <Rule>
    &red_blue_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,0'/>
  </Rule>
  <Rule>
    &red_blue_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,0'/>
  </Rule>
</Style>

<!-- Style for green hiking tracks together with blue ones. -->
<Style name="green-blue-track">
  <Rule>
    &green_blue_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,0'/>
  </Rule>
  <Rule>
    &green_blue_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,0'/>
  </Rule>
</Style>


<!-- Style for red hiking tracks together with green and blue ones. -->
<Style name="red-green-blue-track">
  <Rule>
    &red_green_blue_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,16'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,16,8,0'/>
  </Rule>
  <Rule>
    &red_green_blue_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,16'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,16,8,0'/>
  </Rule>
</Style>

<!-- Style for yellow hiking tracks together with green and blue ones. -->
<Style name="yellow-green-blue-track">
  <Rule>
    &yellow_green_blue_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,16'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,16,8,0'/>
  </Rule>
  <Rule>
    &yellow_green_blue_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,16'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,16,8,0'/>
  </Rule>
</Style>

<!-- Style for yellow hiking tracks together with red and blue ones. -->
<Style name="yellow-red-blue-track">
  <Rule>
    &yellow_red_blue_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,16'/>
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,16,8,0'/>
  </Rule>
  <Rule>
    &yellow_red_blue_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,16'/>
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,16,8,0'/>
  </Rule>
</Style>

<!-- Style for yellow hiking tracks together with green and blue ones. -->
<Style name="yellow-red-green-track">
  <Rule>
    &yellow_red_green_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,16'/>
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,8'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,16,8,0'/>
  </Rule>
  <Rule>
    &yellow_red_green_hiking_filter;
    &maxscale_zoom16;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,16'/>
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,8'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,16,8,0'/>
  </Rule>
</Style>

<!-- Style for all four hiking tracks together. -->
<Style name="yellow-red-green-blue-track">
  <Rule>
    &yellow_red_green_blue_hiking_filter;
    &maxscale_zoom13;
    &minscale_zoom15;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='8,24'/>
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,8,8,16'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,16,8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='2' stroke-dasharray='0,24,8,0'/>
  </Rule>
  <Rule>
    &yellow_red_green_blue_hiking_filter;
    &maxscale_zoom16;
    &minscale_zoom20;
    <LineSymbolizer stroke='#dddd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='8,24'/>
    <LineSymbolizer stroke='#dd0000' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,8,8,16'/>
    <LineSymbolizer stroke='#00dd00' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,16,8,8'/>
    <LineSymbolizer stroke='#0000dd' stroke-opacity='1.0' stroke-width='3' stroke-dasharray='0,24,8,0'/>
  </Rule>
</Style>

<!-- Styles for tracks with shields. -->
<Style name="yellow-shield">
  <Rule>
    <Filter>[kct_yellow]='bicycle'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct_white_cycle.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_yellow]='local'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-local-yellow.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_yellow]='learning'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-learning-yellow.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_yellow]='ruin'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-ruin-yellow.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_yellow]='peak'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-peak-yellow.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_yellow]='spring'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-spring-yellow.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_yellow]='interesting_object'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-interesting_object-yellow.png"
        minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_yellow]='horse'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-horse-yellow.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_yellow]='ski'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-ski-yellow.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_yellow]='wheelchair'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-wheelchair-yellow.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
</Style>
<Style name="red-shield">
  <Rule>
    <Filter>[kct_red]='bicycle'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct_red_cycle.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_red]='local'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-local-red.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_red]='learning'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-learning-red.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_red]='ruin'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-ruin-red.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_red]='peak'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-peak-red.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_red]='spring'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-spring-red.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_red]='interesting_object'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-interesting_object-red.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_red]='horse'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-horse-red.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_red]='ski'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-ski-red.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_red]='wheelchair'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-wheelchair-red.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
</Style>
<Style name="green-shield">
  <Rule>
    <Filter>[kct_green]='bicycle'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct_green_cycle.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_green]='local'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-local-green.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_green]='learning'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-learning-green.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_green]='ruin'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-ruin-green.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_green]='peak'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-peak-green.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_green]='spring'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-spring-green.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_green]='interesting_object'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-interesting_object-green.png"
        minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_green]='horse'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-horse-green.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_green]='ski'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-ski-green.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_green]='wheelchair'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-wheelchair-green.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
</Style>
<Style name="blue-shield">
  <Rule>
    <Filter>[kct_blue]='bicycle'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct_blue_cycle.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_blue]='local'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-local-blue.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_blue]='learning'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-learning-blue.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_blue]='ruin'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-ruin-blue.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_blue]='peak'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-peak-blue.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_blue]='spring'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-spring-blue.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_blue]='interesting_object'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-interesting_object-blue.png"
        minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_blue]='horse'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-horse-blue.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_blue]='ski'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-ski-blue.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
  <Rule>
    <Filter>[kct_blue]='wheelchair'</Filter>
    &maxscale_zoom14;
    &minscale_zoom20;
    <ShieldSymbolizer face-name="DejaVu Sans Bold" 
      placement="line" file="&symbols;/kct-wheelchair-blue.png"
       minimum-distance="10" spacing="100">' '</ShieldSymbolizer>
  </Rule>
</Style>
