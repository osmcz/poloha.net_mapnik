<!-- entities.xml.inc -->
<!-- otm-tracks-styles.xml.inc -->
<!-- Contour lines styles. -->
<Style name="contours10">
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom20;
    <LineSymbolizer stroke="&line_color;" stroke-width="0.2" smooth="1.0"/>
  </Rule>
</Style>
<Style name="contours20">
  <Rule>
    &maxscale_zoom17;
    &minscale_zoom22;
    <LineSymbolizer stroke="&line_color;" stroke-width="0.5" smooth="1.0"/>
  </Rule>
</Style>
<Style name="contours50">
  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LineSymbolizer stroke="&line_color;" stroke-width="0.3" smooth="1.0"/>
  </Rule>
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom16;
    <LineSymbolizer stroke="&line_color;" stroke-width="0.5" smooth="1.0"/>
  </Rule>
  <Rule>
    &maxscale_zoom17;
    &minscale_zoom22;
    <LineSymbolizer stroke="&line_color;" stroke-width="0.7" smooth="1.0"/>
  </Rule>
</Style>
<Style name="contours100">
  <Rule>
    &maxscale_zoom10;
    &minscale_zoom11;
    <LineSymbolizer stroke="&line_color;" stroke-width="0.3" smooth="1.0"/>
  </Rule>
  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LineSymbolizer stroke="&line_color;" stroke-width="0.5" smooth="1.0"/>
  </Rule>
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom16;
    <LineSymbolizer stroke="&line_color;" stroke-width="0.7" smooth="1.0"/>
  </Rule>
  <Rule>
    &maxscale_zoom17;
    &minscale_zoom22;
    <LineSymbolizer stroke="&line_color;" stroke-width="1.0" smooth="1.0"/>
  </Rule>
</Style>
<Style name="contours200">
  <Rule>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer stroke="&line_color;" stroke-width="0.3" smooth="1.0"/>
  </Rule>
</Style>

<!-- Style for contour lines labels. -->
<Style name="contours-text10">
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom22;
  </Rule>
</Style>
<Style name="contours-text20">
  <Rule>
    &maxscale_zoom17;
    &minscale_zoom22;
    <TextSymbolizer
        face-name="DejaVu Sans Book"
        size="&font_size_tiny;"
        upright="left-only"
        placement="line"
        avoid-edges="true"
        repeat-distance="800"
        fill="&text_label_color;"
        halo-radius="1"
        halo-fill="&halo_color;"
        smooth="1.0"
    > [height] </TextSymbolizer>
  </Rule>
</Style>
<Style name="contours-text50">
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <TextSymbolizer
        face-name="DejaVu Sans Book"
        size="&font_size_extra_tiny;"
        upright="left-only"
        placement="line"
        avoid-edges="true"
        repeat-distance="400"
        minimum-path-length="100"
        minimum-padding="100"
        fill="&text_label_color;"
        halo-radius="1" halo-fill="&halo_color;"
        smooth="1.0"
      > [height] </TextSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <TextSymbolizer
        face-name="DejaVu Sans Book"
        size="&font_size_tiny;"
        upright="left-only"
        placement="line"
        avoid-edges="true"
        repeat-distance="800"
        minimum-path-length="200"
        minimum-padding="100"
        fill="&text_label_color;"
        halo-radius="1" halo-fill="&halo_color;"
        smooth="1.0"
      > [height] </TextSymbolizer>
  </Rule>
</Style>
<Style name="contours-text100">
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <TextSymbolizer
        face-name="DejaVu Sans Book"
        size="&font_size_extra_tiny;"
        upright="left-only"
        placement="line"
        avoid-edges="true"
        repeat-distance="600"
        minimum-path-length="100"
        minimum-padding="100"
        fill="&text_label_color;"
        halo-radius="1"
        halo-fill="&halo_color;"
        smooth="1.0"
    > [height] </TextSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <TextSymbolizer
        face-name="DejaVu Sans Book"
        size="&font_size_tiny;"
        upright="left-only"
        placement="line"
        avoid-edges="true"
        repeat-distance="400"
        minimum-path-length="200"
        minimum-padding="100"
        fill="&text_label_color;"
        halo-radius="1"
        halo-fill="&halo_color;"
        smooth="1.0"
    > [height] </TextSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom17;
    &minscale_zoom22;
    <TextSymbolizer
        face-name="DejaVu Sans Book"
        size="&font_size_tiny;"
        upright="left-only"
        placement="line"
        avoid-edges="true"
        repeat-distance="800"
        fill="&text_label_color;"
        halo-radius="1"
        halo-fill="&halo_color;"
        smooth="1.0"
    > [height] </TextSymbolizer>
  </Rule>
</Style>
