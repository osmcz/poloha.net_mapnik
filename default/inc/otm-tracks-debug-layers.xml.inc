<!-- Layer with local tracks. -->
<Layer name="track" status="on" srs="&srs900913;">
  <StyleName>uncomplete-track</StyleName>
 <StyleName>abandoned-track</StyleName>
  <Datasource>
    <Parameter name="table">
      (SELECT osm_id, way, route, name, ref, complete, abandoned, kct_yellow,
        kct_red, kct_green, kct_blue, char_length(ref) AS length,
      CASE
        WHEN complete = 'no' AND abandoned = 'yes' THEN 'uncomplete abandoned'
        WHEN complete = 'no' THEN 'uncomplete'
        WHEN abandoned = 'yes' THEN 'abandoned'
        ELSE ''
      END AS note
      FROM &prefix;_line WHERE
      (kct_yellow IS NOT NULL) OR (kct_red IS NOT NULL) OR
      (kct_green IS NOT NULL) OR (kct_blue IS NOT NULL))
      as tracks
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
      (SELECT osm_id, way, route, name, ref, network, complete,
        char_length(ref) AS length
      FROM &prefix;_line WHERE
      (route='foot' OR route='hiking' OR route='horse' OR route='ski') AND
      (network='e-road' OR network='iwn'))
      as international_tracks
    </Parameter>
    &datasource-settings;
  </Datasource>
</Layer>
