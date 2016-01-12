<Style name="buildings">
    <Rule>
      &maxscale_zoom12;
      <LineSymbolizer stroke="#FFFF35" stroke-width="2.5" stroke-opacity="0.9"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom18;
      <TextSymbolizer size="12" fill="#FFFF35" fontset-name="bold-fonts" wrap-width="12" minimum-distance="250" halo-radius="2" halo-fill="#000000" placement="line">[nazev]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom19;
      <TextSymbolizer size="14" fill="#FFFF35" fontset-name="bold-fonts" wrap-width="12" minimum-distance="250" halo-radius="2" halo-fill="#000000" placement="line">[nazev]</TextSymbolizer>
    </Rule>
</Style>

<Layer name="buildings" status="on" srs="&osm2pgsql_projection;">
    <StyleName>buildings</StyleName>
    <Datasource>
      <Parameter name="table">
      (select * from ruian.ulice) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>


