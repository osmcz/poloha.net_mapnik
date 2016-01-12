<Style name="buildings">
    <Rule>
      &maxscale_zoom12;
      <PolygonSymbolizer fill-opacity="0.1" fill="#00FF00"/>
      <LineSymbolizer stroke="#00FF00" stroke-width="1.5"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      &minscale_zoom18;
      <TextSymbolizer size="13" fill="#00ff00" dy="0" fontset-name="bold-fonts" wrap-width="0" minimum-distance="1" placement="interior" halo-radius="2" halo-fill="#000000">[cislo]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom19;
      <TextSymbolizer size="16" fill="#00ff00" dy="0" fontset-name="bold-fonts" wrap-width="0" minimum-distance="1" placement="interior" halo-radius="2" halo-fill="#000000">[cislo]</TextSymbolizer>
    </Rule>
</Style>

<Layer name="buildings" status="on" srs="&osm2pgsql_projection;">
    <StyleName>buildings</StyleName>
    <Datasource>
      <Parameter name="table">
      (select * from ruian.parcely) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>


