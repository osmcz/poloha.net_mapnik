<!-- Layer with local tracks. -->
<Layer name="track" status="on" srs="&srs900913;">
  <StyleName>yellow-track</StyleName>
  <StyleName>red-track</StyleName>
  <StyleName>green-track</StyleName>
  <StyleName>blue-track</StyleName>
  <StyleName>yellow-red-track</StyleName>
  <StyleName>yellow-green-track</StyleName>
  <StyleName>yellow-blue-track</StyleName>
  <StyleName>red-green-track</StyleName>
  <StyleName>red-blue-track</StyleName>
  <StyleName>green-blue-track</StyleName>
  <StyleName>red-green-blue-track</StyleName>
  <StyleName>yellow-green-blue-track</StyleName>
  <StyleName>yellow-red-blue-track</StyleName>
  <StyleName>yellow-red-green-track</StyleName>
  <StyleName>yellow-red-green-blue-track</StyleName>
  <StyleName>yellow-shield</StyleName>
  <StyleName>red-shield</StyleName>
  <StyleName>green-shield</StyleName>
  <StyleName>blue-shield</StyleName>
  <Datasource>
    <Parameter name="table">
    (select * from &prefix;_kct) as tracks
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>

<!-- International tracks. -->
<Layer name="international-track" status="on" srs="&srs900913;">
  <StyleName>international-track</StyleName>
  <StyleName>international-track-shield</StyleName>
  <Datasource>
    <Parameter name="table">
      (SELECT osm_id,way,route,name,ref,network,char_length(ref) AS length
      FROM &prefix;_line WHERE
      (route='foot' OR route='hiking' OR route='horse' OR route='ski') AND
      (network='e-road' OR network='iwn'))
      as international_tracks
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>

<!-- Layer with guideposts. -->
<Layer name="guidepost" status="on" srs="&srs900913;">
  <StyleName>guidepost</StyleName>    
  <Datasource>
    <Parameter name="table">
      (SELECT osm_id,way,route,name,ref,amenity,information
      FROM &prefix;_point WHERE
      amenity='signpost' OR information='guidepost')
      as guidepost
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
