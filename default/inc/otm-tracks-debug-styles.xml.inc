<!-- Style for international hiking tracks. -->

<!-- Style to highlight uncomplete hiking tracks. -->
<Style name="uncomplete-track">
 <Rule>
    <Filter>[complete] = 'no'</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LinePatternSymbolizer
      file="&symbols;/uncomplete-track.4.png"/>
    <TextSymbolizer fontset-name="book-fonts" 
      size="&font_size_extra_extra_tiny;" placement="line" fill="#000000"
      minimum-distance="10" spacing="100">[note]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[complete] = 'no'</Filter>
    &maxscale_zoom10;
    &minscale_zoom11;
    <LinePatternSymbolizer
      file="&symbols;/uncomplete-track.6.png"/>
    <TextSymbolizer fontset-name="book-fonts" 
      size="&font_size_extra_extra_tiny;" placement="line" fill="#000000"
      minimum-distance="10" spacing="100">[note]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[complete] = 'no'</Filter>
    &maxscale_zoom12;
    &minscale_zoom12;
    <LinePatternSymbolizer
      file="&symbols;/uncomplete-track.8.png"/>
    <TextSymbolizer fontset-name="book-fonts" 
      size="&font_size_extra_tiny;" placement="line" fill="#000000"
      minimum-distance="10" spacing="100">[note]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[complete] = 'no'</Filter>
    &maxscale_zoom13;
    &minscale_zoom20;
    <LinePatternSymbolizer
      file="&symbols;/uncomplete-track.10.png"/>
    <TextSymbolizer fontset-name="book-fonts" 
      size="&font_size_tiny;" placement="line" fill="#000000"
      minimum-distance="10" spacing="100">[note]</TextSymbolizer>
  </Rule>
</Style>

<!-- Style to highlight abandoned hiking tracks. -->
<Style name="abandoned-track">
 <Rule>
    <Filter>[abandoned] = 'yes'</Filter>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LinePatternSymbolizer
      file="&symbols;/abandoned-track.10.png"/>
    <TextSymbolizer fontset-name="book-fonts" 
      size="&font_size_extra_extra_tiny;" placement="line" fill="#000000"
      minimum-distance="10" spacing="100">[note]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[abandoned] = 'yes'</Filter>
    &maxscale_zoom10;
    &minscale_zoom11;
    <LinePatternSymbolizer
      file="&symbols;/abandoned-track.10.png"/>
    <TextSymbolizer fontset-name="book-fonts" 
      size="&font_size_extra_extra_tiny;" placement="line" fill="#000000"
      minimum-distance="10" spacing="100">[note]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[abandoned] = 'yes'</Filter>
    &maxscale_zoom12;
    &minscale_zoom12;
    <LinePatternSymbolizer
      file="&symbols;/abandoned-track.10.png"/>
    <TextSymbolizer fontset-name="book-fonts" 
      size="&font_size_extra_tiny;" placement="line" fill="#000000"
      minimum-distance="10" spacing="100">[note]</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>[abandoned] = 'yes'</Filter>
    &maxscale_zoom13;
    &minscale_zoom20;
    <LinePatternSymbolizer
      file="&symbols;/abandoned-track.10.png"/>
    <TextSymbolizer fontset-name="book-fonts" 
      size="&font_size_tiny;" placement="line" fill="#000000"
      minimum-distance="10" spacing="100">[note]</TextSymbolizer>
  </Rule>
</Style>
