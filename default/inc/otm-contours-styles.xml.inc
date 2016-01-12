<!-- entities.xml.inc -->
<!-- otm-tracks-styles.xml.inc -->
<!-- Contour lines styles. -->
<Style name="contours10">
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom20;
    <LineSymbolizer stroke='#844c44' stroke-width="0.2"/>
  </Rule>
</Style>
<Style name="contours50">
  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LineSymbolizer stroke='#844c44' stroke-width="0.3"/>
  </Rule>
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom20;
    <LineSymbolizer stroke='#844c44' stroke-width="0.5"/>
  </Rule>
</Style>
<Style name="contours100">
  <Rule>
    &maxscale_zoom10;
    &minscale_zoom11;
    <LineSymbolizer stroke='#844c44' stroke-width="0.3"/>
  </Rule>
  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LineSymbolizer stroke='#844c44' stroke-width="0.5"/>
  </Rule>
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom20;
    <LineSymbolizer stroke='#844c44' stroke-width="0.7"/>
  </Rule>
</Style>
<Style name="contours200">
  <Rule>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer stroke='#844c44' stroke-width="0.3"/>
  </Rule>
</Style>

<!-- Style for contour lines labels. -->
<Style name="contours-text10">
  <Rule>
    <MaxScaleDenominator>68248</MaxScaleDenominator>
    <MinScaleDenominator>50</MinScaleDenominator>
    <TextSymbolizer face-name="DejaVu Sans Book"
      size="&font_size_tiny;" placement="line" spacing="1000" fill="#844c44"
      halo-radius="1" halo-fill="#b4aca4">[height]</TextSymbolizer>
  </Rule>
</Style>
<Style name="contours-text50">
  <Rule>
    <MaxScaleDenominator>68248</MaxScaleDenominator>
    <MinScaleDenominator>50</MinScaleDenominator>
    <TextSymbolizer face-name="DejaVu Sans Book"
      size="&font_size_tiny;" placement="line" spacing="1000" fill="#844c44"
      halo-radius="1" halo-fill="#b4aca4">[height]</TextSymbolizer>
  </Rule>
</Style>
<Style name="contours-text100">
  <Rule>
    <MaxScaleDenominator>68248</MaxScaleDenominator>
    <MinScaleDenominator>50</MinScaleDenominator>
    <TextSymbolizer face-name="DejaVu Sans Book"
      size="&font_size_tiny;" placement="line" spacing="1000" fill="#844c44"
      halo-radius="1" halo-fill="#b4aca4">[height]</TextSymbolizer>
  </Rule>
</Style>
