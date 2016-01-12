<Style name="buildings">
    <Rule>
      <Filter>[duvod] = NULL</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer fill-opacity="0.15" fill="#FB00FF"/>
      <LineSymbolizer stroke="#FB00FF" stroke-width="1.5"/>
    </Rule>
    <Rule>
      <Filter>[duvod] != NULL</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer fill-opacity="0.20" fill="#444444"/>
      <LineSymbolizer stroke="#000000" stroke-width="1.5"/>
    </Rule>
</Style>


<Style name="spojnice">
    <Rule>
      &maxscale_zoom12;
      <LineSymbolizer stroke="#FF0000" stroke-width="1.0"/>
    </Rule>
</Style>

<Style name="rozbitehranice">
    <Rule>
      <Filter>[duvod] = NULL</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer fill-opacity="0.15" fill="#FF0000"/>
      <LineSymbolizer stroke="#FF0000" stroke-width="1.5"/>
    </Rule>
    <Rule>
      <Filter>[duvod] != NULL</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer fill-opacity="0.20" fill="#444444"/>
      <LineSymbolizer stroke="#000000" stroke-width="1.5"/>
    </Rule>
</Style>

<Style name="neviditelne">
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom14;
	<PointSymbolizer file="ghost-8.png" allow-overlap="true" ignore-placement="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom17;
	<PointSymbolizer file="ghost-16.png" allow-overlap="true" ignore-placement="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
	<PointSymbolizer file="ghost-32.png" allow-overlap="true" ignore-placement="true"/>
    </Rule>
</Style>

<Style name="rozbityduch">
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom14;
	<PointSymbolizer file="ghost-red-8.png" allow-overlap="true" ignore-placement="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom17;
	<PointSymbolizer file="ghost-red-16.png" allow-overlap="true" ignore-placement="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom18;
	<PointSymbolizer file="ghost-red-32.png" allow-overlap="true" ignore-placement="true"/>
    </Rule>
</Style>


<Layer name="buildings" status="on" srs="&osm2pgsql_projection;">
    <StyleName>buildings</StyleName>
    <Datasource>
      <Parameter name="table">
      (select * from ruian.budovy) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="rozbitehranice" status="on" srs="&osm2pgsql_projection;">
    <StyleName>rozbitehranice</StyleName>
    <Datasource>
      <Parameter name="table">
      (select * from ruian.rozbite_hranice) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="spojnice" status="on" srs="&osm2pgsql_projection;">
    <StyleName>spojnice</StyleName>
    <Datasource>
      <Parameter name="table">
      (select * from ruian.rozbite_spojnice) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="neviditelne" status="on" srs="&osm2pgsql_projection;">
    <StyleName>neviditelne</StyleName>
    <Datasource>
      <Parameter name="table">
      (select * from ruian.neviditelne_budovy) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="rozbityduch" status="on" srs="&osm2pgsql_projection;">
    <StyleName>rozbityduch</StyleName>
    <Datasource>
      <Parameter name="table">
      (select * from ruian.rozbite_definicni_bod) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

