<!-- Hillshading layer. -->
<!--
<Layer name="hillshade" status="on" srs="&srs900913;">
-->
<Layer name="hillshade" status="on">
  <StyleName>shading</StyleName>
  <Datasource>
    <Parameter name="type">gdal</Parameter>
    <Parameter name="file">tmp/cz_hillshade.tif</Parameter>
    <Parameter name="format">tiff</Parameter>
  </Datasource>
</Layer>
