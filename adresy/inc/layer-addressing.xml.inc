<Style name="housenumbers">
    <Rule>
      <Filter>[barva]='R'</Filter>
      &maxscale_zoom12;
      &minscale_zoom16;
      <PointSymbolizer file="red-dot.png" allow-overlap="true" ignore-placement="true"/>
    </Rule>
    <Rule>
      <Filter>[barva]='B'</Filter>
      &maxscale_zoom12;
      &minscale_zoom16;
      <PointSymbolizer file="blue-dot.png" allow-overlap="true" ignore-placement="true"/>
    </Rule>
    <Rule>
      <Filter>[barva]='G'</Filter>
      &maxscale_zoom12;
      &minscale_zoom16;
      <PointSymbolizer file="green-dot.png" allow-overlap="true" ignore-placement="true"/>
    </Rule>
    <Rule>
      <Filter>[barva]='R'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <TextSymbolizer size="12" fill="#ff3f19" dy="0" fontset-name="bold-fonts" wrap-width="0" minimum-distance="1" placement="interior" halo-radius="1">[cislo]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[barva]='B'</Filter>
      &maxscale_zoom17;
      &minscale_zoom18;
      <TextSymbolizer size="12" fill="#1F43EA" dy="0" fontset-name="bold-fonts" wrap-width="0" minimum-distance="1" placement="interior" halo-radius="1">[cislo]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[barva]='R'</Filter>
      &maxscale_zoom19;
      <TextSymbolizer size="14" fill="#ff3f19" dy="0" fontset-name="bold-fonts" wrap-width="0" minimum-distance="1" placement="interior" halo-radius="1">[cislo]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[barva]='B'</Filter>
      &maxscale_zoom19;
      <TextSymbolizer size="14" fill="#1F43EA" dy="0" fontset-name="bold-fonts" wrap-width="0" minimum-distance="1" placement="interior" halo-radius="1">[cislo]</TextSymbolizer>
    </Rule>
</Style>


<Layer name="housenumbers" status="on" srs="&osm2pgsql_projection;">
    <StyleName>housenumbers</StyleName>
    <Datasource>
      <Parameter name="table">
      (select * from ruian.adresy) as housenumbers
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
