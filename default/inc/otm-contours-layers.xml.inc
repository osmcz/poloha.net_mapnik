<!-- Contour lines layers. -->
<Layer name="contours10" status="on" srs="+proj=latlong +datum=WGS84">
  <StyleName>contours10</StyleName>
  <StyleName>contours-text10</StyleName>
  <Datasource>
    <Parameter name="table">(SELECT way,height::integer FROM &prefix;_contours WHERE height::integer % 10 = 0 AND height::integer % 50 != 0 AND height::integer % 100 != 0) as contours10</Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
<Layer name="contours50" status="on" srs="+proj=latlong +datum=WGS84">
  <StyleName>contours50</StyleName>
  <StyleName>contours-text50</StyleName>
  <Datasource>
    <Parameter name="table">(SELECT way,height::integer FROM &prefix;_contours WHERE height::integer % 50 = 0 AND height::integer % 100 != 0) as contours50</Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
<Layer name="contours100" status="on" srs="+proj=latlong +datum=WGS84">
  <StyleName>contours100</StyleName>
  <StyleName>contours-text100</StyleName>
  <Datasource>
    <Parameter name="table">(SELECT way,height::integer FROM &prefix;_contours WHERE height::integer % 100 = 0) as contours100</Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
<Layer name="contours200" status="on" srs="+proj=latlong +datum=WGS84">
  <StyleName>contours200</StyleName>
  <Datasource>
    <Parameter name="table">(SELECT way,height::integer FROM &prefix;_contours WHERE height::integer % 200 = 0) as contours200</Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
