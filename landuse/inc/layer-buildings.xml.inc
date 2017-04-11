<Style name="landuse">

    <Rule>
    <PolygonSymbolizer fill-opacity="[opacity]" fill="[color]"/>
    </Rule>

    <Rule>
      &maxscale_zoom15;
      &minscale_zoom16;
      <LineSymbolizer stroke="#000000" stroke-width="0.3"/>
    </Rule>

    <Rule>
      &maxscale_zoom17;
      &minscale_zoom18;
      <LineSymbolizer stroke="#000000" stroke-width="0.5"/>
      <TextSymbolizer size="13" fill="#eeeeee" dy="0" fontset-name="bold-fonts" wrap-width="60" wrap-before="true" placement-type="simple" spacing="200" minimum-distance="150" placement="interior" halo-radius="2" halo-fill="#000000">[nazev]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom19;
      <LineSymbolizer stroke="#000000" stroke-width="1.0"/>
      <TextSymbolizer size="16" fill="#eeeeee" dy="0" fontset-name="bold-fonts" wrap-width="60" wrap-before="true" placement-type="simple" spacing="200" minimum-distance="120" placement="interior" halo-radius="2" halo-fill="#000000">[nazev]</TextSymbolizer>
    </Rule>
</Style>

<Layer name="landuse" status="on" srs="&osm2pgsql_projection;">
    <StyleName>landuse</StyleName>
    <Datasource>
      <Parameter name="table">
      (select * from ruian.landuse_view) as landuse
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
