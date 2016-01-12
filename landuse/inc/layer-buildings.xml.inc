<Style name="landuse">
    <Rule>
      <Filter>[kod]=1</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#C0C0FF"/>
    </Rule>
    <Rule>
      <Filter>[kod]=2</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#4E3B57"/>
    </Rule>
    <Rule>
      <Filter>[kod]=3</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#F0F000"/>
    </Rule>
    <Rule>
      <Filter>[kod]=4</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#008000"/>
    </Rule>
    <Rule>
      <Filter>[kod]=5</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#9e9971"/>
    </Rule>
    <Rule>
      <Filter>[kod]=6</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#0B9EFF"/>
    </Rule>
    <Rule>
      <Filter>[kod]=7</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#02E697"/>
    </Rule>
    <Rule>
      <Filter>[kod]=8</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#00BD00"/>
    </Rule>
    <Rule>
      <Filter>[kod]=9</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#9D5A4E"/>
    </Rule>
    <Rule>
      <Filter>[kod]=10</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#00EA00"/>
    </Rule>
    <Rule>
      <Filter>[kod]=11</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#AAEA06"/>
    </Rule>
    <Rule>
      <Filter>[kod]=12</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#C79EBD"/>
    </Rule>
    <Rule>
      <Filter>[kod]=13</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#4F5E9A"/>
    </Rule>
    <Rule>
      <Filter>[kod]=14</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#101010"/>
    </Rule>
    <Rule>
      <Filter>[kod]=15</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#B48E70"/>
    </Rule>
    <Rule>
      <Filter>[kod]=16</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#999999"/>
    </Rule>
    <Rule>
      <Filter>[kod]=17</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#ACACAC"/>
    </Rule>
    <Rule>
      <Filter>[kod]=18</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#FD9C2C"/>
    </Rule>
    <Rule>
      <Filter>[kod]=19</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#C56321"/>
    </Rule>
    <Rule>
      <Filter>[kod]=20</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#00B200"/>
    </Rule>
    <Rule>
      <Filter>[kod]=21</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#085FEA"/>
    </Rule>
    <Rule>
      <Filter>[kod]=22</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#AEAEAE"/>
    </Rule>
    <Rule>
      <Filter>[kod]=23</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#333333"/>
    </Rule>
    <Rule>
      <Filter>[kod]=24</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#8CD3BE"/>
    </Rule>
    <Rule>
      <Filter>[kod]=25</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#A78C4B"/>
    </Rule>
    <Rule>
      <Filter>[kod]=26</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#C96D8C"/>
    </Rule>
    <Rule>
      <Filter>[kod]=27</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#A1CF8C"/>
    </Rule>
    <Rule>
      <Filter>[kod]=28</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#7E3ACA"/>
    </Rule>
    <Rule>
      <Filter>[kod]=29</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#5BA1CD"/>
    </Rule>
    <Rule>
      <Filter>[kod]=30</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#98FF11"/>
    </Rule>
    <Rule>
      <Filter>[kod]=31</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#674D3E"/>
    </Rule>
    <Rule>
      <Filter>[kod]=32</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#496741"/>
    </Rule>
    <Rule>
      <Filter>[kod]=33</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#5CAB5F"/>
    </Rule>
    <Rule>
      <Filter>[kod]=34</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#6B79AB"/>
    </Rule>
    <Rule>
      <Filter>[kod]=35</Filter>
      <PolygonSymbolizer fill-opacity="0.65" fill="#004000"/>
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
