<Style name="todo">
    <Rule>
      <Filter>[duvod] = NULL</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer fill-opacity="0.15" fill="#0080FF"/>
      <LineSymbolizer stroke="#0080FF" stroke-width="1.5"/>
    </Rule>
    <Rule>
      <Filter>[duvod] != NULL</Filter>
      &maxscale_zoom12;
      <PolygonSymbolizer fill-opacity="0.20" fill="#444444"/>
      <LineSymbolizer stroke="#000000" stroke-width="1.5"/>
    </Rule>
</Style>

<Layer name="todo" status="on" srs="&osm2pgsql_projection;">
    <StyleName>todo</StyleName>
    <Datasource>
      <Parameter name="table">
      (select so.kod,neplatne.duvod,so.hranice from ruian.modre_budovy so right join ruian.buildings_todo todo on todo.kod=so.kod left join osmtables.neplatne_budovy neplatne on neplatne.kod=todo.kod) as buildings
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

