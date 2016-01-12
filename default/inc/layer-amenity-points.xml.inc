<!--HORSKA SLUZBA-->
<Style name="points">
     <Rule>
      &maxscale_zoom17;
      <Filter>[railway]='crossing' and [highway]!='crossing'</Filter>
      <PointSymbolizer file="&symbols;/railway_crossing.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom18;
      <Filter>[man_made]='survey_point'</Filter>
      <PointSymbolizer file="&symbols;/man_made_survey_point.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom18;
      <Filter>[man_made]='chimney'</Filter>
      <PointSymbolizer file="&symbols;/man_made_chimney.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom18;
      <Filter>[highway]='street_lamp'</Filter>
      <PointSymbolizer file="&symbols;/highway_streetlamp_5x5.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[highway]='crossing'  </Filter>
      <PointSymbolizer file="&symbols;/highway_crossing.png" placement="interior"/>
     </Rule>

     <Rule>
      &maxscale_zoom18;
      <Filter>[emergency]='siren'</Filter>
      <PointSymbolizer file="&symbols;/emergency_siren.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[emergency]='fire_hydrant'</Filter>
      <PointSymbolizer file="&symbols;/emergency_fire_hydrant.png" placement="interior"/>
     </Rule>

     <Rule>
      &maxscale_zoom17;
      <Filter>[barrier]='motorcycle'</Filter>
      <PointSymbolizer file="&symbols;/barrier_motorcycle_barrier.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[barrier]='chain'</Filter>
      <PointSymbolizer file="&symbols;/barrier_chain.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[barrier]='full-height_turnstile' or [barrier]='turnstile'</Filter>
      <PointSymbolizer file="&symbols;/barrier_full-height_turnstile.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='border_control' or [historic]='border_control' or [barrier]='border_control'</Filter>
      <PointSymbolizer file="&symbols;/barrier_border_control.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='stripclub'</Filter>
      <PointSymbolizer file="&symbols;/amenity_stripclub_png.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[aeroway]='windsock' or [man_made]='windsock'</Filter>
      <PointSymbolizer file="&symbols;/aeroway_windsock.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='taxi'</Filter>
      <PointSymbolizer file="&symbols;/transport_taxi_rank.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[traffic_calming]='bump'</Filter>
      <PointSymbolizer file="&symbols;/transport_speedbump.p.DA0092.12.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='bicycle_parking'</Filter>
      <PointSymbolizer file="&symbols;/transport_parking_bicycle.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='ferry_terminal'</Filter>
      <PointSymbolizer file="&symbols;/transport_marina.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='zoo'</Filter>
      <PointSymbolizer file="&symbols;/tourist_zoo.n.39AC39.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[historic]='wreck'</Filter>
      <PointSymbolizer file="&symbols;/tourist_wreck.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[historic]='wayside_shrine' or [man_made]='wayside_shrine'</Filter>
      <PointSymbolizer file="&symbols;/tourist_wayside_shrine.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[historic]='wayside_cross' or [man_made]='wayside_cross'</Filter>
      <PointSymbolizer file="&symbols;/tourist_wayside_cross.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[man_made]='watermill'</Filter>
      <PointSymbolizer file="&symbols;/tourist_waterwheel.p.000000.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[historic]='monument'</Filter>
      <PointSymbolizer file="&symbols;/tourist_monument.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[information]='map'</Filter>
      <PointSymbolizer file="&symbols;/tourist_map.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[historic]='castle' or [building]='castle'</Filter>
      <PointSymbolizer file="&symbols;/tourist_castle2.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[natural]='beach' or [leisure]='beach'</Filter>
      <PointSymbolizer file="&symbols;/tourist_beach.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[historic]='battlefield'</Filter>
      <PointSymbolizer file="&symbols;/tourist_battlefield.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='attraction'</Filter>
      <PointSymbolizer file="&symbols;/tourist_attraction.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='gallery'</Filter>
      <PointSymbolizer file="&symbols;/tourist_art_gallery2.p.0092DA.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='video'</Filter>
      <PointSymbolizer file="&symbols;/shopping_video_rental.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='vending_machine'</Filter>
      <PointSymbolizer file="&symbols;/shopping_vending_machine.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='toys'</Filter>
      <PointSymbolizer file="&symbols;/shopping_toys.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='tobacco'</Filter>
      <PointSymbolizer file="&symbols;/shopping_tobacco.p.DA0092.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='tackle'</Filter>
      <PointSymbolizer file="&symbols;/shopping_tackle.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='photo' or [shop]='photo_studio'</Filter>
      <PointSymbolizer file="&symbols;/shopping_photo.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='newsagent'</Filter>
      <PointSymbolizer file="&symbols;/shopping_newspaper.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='music'</Filter>
      <PointSymbolizer file="&symbols;/shopping_music.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='motorcycle'</Filter>
      <PointSymbolizer file="&symbols;/shopping_motorcycle.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='mobile_phone'</Filter>
      <PointSymbolizer file="&symbols;/shopping_mobile_phone.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='kiosk'</Filter>
      <PointSymbolizer file="&symbols;/shopping_kiosk.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='jewelry'</Filter>
      <PointSymbolizer file="&symbols;/shopping_jewelry2.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='hifi'</Filter>
      <PointSymbolizer file="&symbols;/shopping_hifi.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='garden_centre'</Filter>
      <PointSymbolizer file="&symbols;/shopping_garden_centre.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='fishing' or [shop]='fish'</Filter>
      <PointSymbolizer file="&symbols;/shopping_fish.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='estate_agent' </Filter>
      <PointSymbolizer file="&symbols;/shopping_estateagent2.glow.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='department_store'</Filter>
      <PointSymbolizer file="&symbols;/shopping_department_store.glow.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='copyshop'</Filter>
      <PointSymbolizer file="&symbols;/shopping_copyshop.glow.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='confectionery'</Filter>
      <PointSymbolizer file="&symbols;/shopping_confectionery.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='alcohol'</Filter>
      <PointSymbolizer file="&symbols;/shopping_alcohol.p.AC39AC.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='sports'</Filter>
      <PointSymbolizer file="&symbols;/shop_sport-icon.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='shoes'</Filter>
      <PointSymbolizer file="&symbols;/shop_shoes-icon.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='outdoor'</Filter>
      <PointSymbolizer file="&symbols;/shop_outdoor-icon.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='hardware'</Filter>
      <PointSymbolizer file="&symbols;/shop_hardware-icon.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[man_made]='communications_tower'</Filter>
      <PointSymbolizer file="&symbols;/poi_tower_communications.p.000000.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[man_made]='tower' or [building]='tower' or [building]='lookout_tower' or [man_made]='lookout_tower'</Filter>
      <PointSymbolizer file="&symbols;/poi_tower_lookout.p.000000.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[man_made]='mine'</Filter>
      <PointSymbolizer file="&symbols;/poi_mine.glow.000000.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[historic]='mine'</Filter>
      <PointSymbolizer file="&symbols;/poi_mine_abandoned.p.000000.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[building]='bunker' or [military]='bunker'</Filter>
      <PointSymbolizer file="&symbols;/poi_military_bunker.p.000000.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='beauty'</Filter>
      <PointSymbolizer file="&symbols;/icon_shop_beauty.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='doctor' or [amenity]='doctors' or [amenity]='health_centre' or [amenity]='health_center'</Filter>
      <PointSymbolizer file="&symbols;/health_doctors2.p.DA0092.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='dentist'</Filter>
      <PointSymbolizer file="&symbols;/health_dentist.p.DA0092.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='pharmacy' or [amenity]='pharmacy'</Filter>
      <PointSymbolizer file="&symbols;/health_pharmacy.n.39AC39.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='ice_cream'</Filter>
      <PointSymbolizer file="&symbols;/food_ice_cream.p.734A08.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[barrier]='entrace' or [building]='entrace'</Filter>
      <PointSymbolizer file="&symbols;/barrier_entrance.p.000000.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[barrier]='exit' or [building]='exit'</Filter>
      <PointSymbolizer file="&symbols;/barrier_exit.p.000000.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='veterinary'</Filter>
      <PointSymbolizer file="&symbols;/amenity_veterinary-icon.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[generator:source]='nuclear'</Filter>
      <PointSymbolizer file="&symbols;/2020_st_powergensource_nuclear.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[generator:source]='wind' </Filter>
      <PointSymbolizer file="&symbols;/2020_st_powergensource_wind.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[generator:source]='photovoltaic' or [generator:source]='solar' </Filter>
      <PointSymbolizer file="&symbols;/2020_st_powergensource_sun.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[generator:source]='hydro' or [generator:source]='tidal' or [generator:source]='wave' </Filter>
      <PointSymbolizer file="&symbols;/2020_st_powergensource_water.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[generator:source]='biofuel' or [generator:source]='biogas' or [generator:source]='biomass' or [generator:source]='coal' or [generator:source]='fossil' </Filter>
      <PointSymbolizer file="&symbols;/2020_st_powergensource_burn.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='animal_shelter'</Filter>
      <PointSymbolizer file="&symbols;/deer_shelter.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='bbq'</Filter>
      <PointSymbolizer file="&symbols;/amenity_bbq.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='college' or [building]='college'</Filter>
      <PointSymbolizer file="&symbols;/education_college.p.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='university' or [building]='university'</Filter>
      <PointSymbolizer file="&symbols;/education_university.p.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='kindergarten'</Filter>
      <PointSymbolizer file="&symbols;/education_nursery3.p.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='school' or [building]='school'  </Filter>
      <PointSymbolizer file="&symbols;/education_school.p.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='nightclub'</Filter>
      <PointSymbolizer file="&symbols;/amenity_nightclub.p.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='clock'</Filter>
      <PointSymbolizer file="&symbols;/tourist_clock.p.16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='hunting_stand'</Filter>
      <PointSymbolizer file="&symbols;/amenity_hunting_stand.p.16.png" placement="interior"/>
     </Rule>









     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='books'</Filter>
      <PointSymbolizer file="&symbols;/shop_books.p_16.png" placement="interior"/>
     </Rule>
     <Rule>
       &maxscale_zoom17;
      <Filter>[shop]='computer'</Filter>
      <PointSymbolizer file="&symbols;/shop_computer.p_16.png" placement="interior"/>
     </Rule>
     <Rule>
       &maxscale_zoom17;
      <Filter>[shop]='dry_cleaning'</Filter>
      <PointSymbolizer file="&symbols;/shop_dry_cleaning.p_16.png" placement="interior"/>
     </Rule>
     <Rule>
       &maxscale_zoom17;
      <Filter>[shop]='gift'</Filter>
      <PointSymbolizer file="&symbols;/shop_gift.p_16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='greengrocer'</Filter>
      <PointSymbolizer file="&symbols;/shop_greengrocer.p_16.png" placement="interior"/>
     </Rule>
     <Rule>
       &maxscale_zoom17;
      <Filter>[shop]='optician'</Filter>
      <PointSymbolizer file="&symbols;/shop_optician.p_16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='pet'</Filter>
      <PointSymbolizer file="&symbols;/shop_pet.p_16.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='bench'</Filter>
      <PointSymbolizer file="&symbols;/amenity_bench.p.8.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom18;
      <Filter>[amenity]='waste_basket'</Filter>
      <PointSymbolizer file="&symbols;/amenity_waste_basket.p.8.png" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='fountain'</Filter>
      <PointSymbolizer file="&symbols;/tourist_fountain.n.16.png" placement="interior"/>
    </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='alpine_hut'</Filter>
      <PointSymbolizer file="&symbols;/alpinehut.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='shelter'</Filter>
      <PointSymbolizer file="&symbols;/shelter2.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='atm'</Filter>
      <PointSymbolizer file="&symbols;/atm2.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='bank'</Filter>
      <PointSymbolizer file="&symbols;/bank2.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='bar'</Filter>
      <PointSymbolizer file="&symbols;/bar.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='bicycle_rental'</Filter>
      <PointSymbolizer file="&symbols;/rental_bicycle.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <Filter>[amenity]='bus_stop' or [highway]='bus_stop'</Filter>
      <PointSymbolizer file="&symbols;/bus_stop_small.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='bus_stop' or [highway]='bus_stop'</Filter>
      <PointSymbolizer file="&symbols;/bus_stop.p.12.png" placement="interior"/>
      <TextSymbolizer size="9" fill="#0066ff" dy="9" fontset-name="book-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='bus_station'</Filter>
      <PointSymbolizer file="&symbols;/bus_station.n.16.png" allow-overlap="false" placement="interior"/>
      <TextSymbolizer size="10" fill="#0066ff" dy="9" fontset-name="book-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
    &maxscale_zoom17;
    <Filter>[highway]='traffic_signals'</Filter>
    <PointSymbolizer file="&symbols;/traffic_light.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='cafe'</Filter>
      <PointSymbolizer file="&symbols;/cafe.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='camp_site'</Filter>
      <PointSymbolizer file="&symbols;/camping.n.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[highway]='ford'</Filter>
      <PointSymbolizer file="&symbols;/transport_ford.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='caravan_site'</Filter>
      <PointSymbolizer file="&symbols;/caravan_park.p.24.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='car_sharing'</Filter>
      <PointSymbolizer file="&symbols;/car_share.p.16.png" allow-overlap="false" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='chalet'</Filter>
      <PointSymbolizer file="&symbols;/chalet.p.16.png" placement="interior"/>
    </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='cinema'</Filter>
      <PointSymbolizer file="&symbols;/cinema.p.24.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='fire_station'</Filter>
      <PointSymbolizer file="&symbols;/firestation.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='fuel'</Filter>
      <PointSymbolizer file="&symbols;/fuel.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='guest_house'</Filter>
      <PointSymbolizer file="&symbols;/guest_house.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='bed_and_breakfast'</Filter>
      <PointSymbolizer file="&symbols;/bandb.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity]='hospital'</Filter>
      <PointSymbolizer file="&symbols;/hospital.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='hostel'</Filter>
      <PointSymbolizer file="&symbols;/hostel.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='hotel'</Filter>
      <PointSymbolizer file="&symbols;/hotel2.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='motel'</Filter>
      <PointSymbolizer file="&symbols;/motel.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='information'</Filter>
      <PointSymbolizer file="&symbols;/information.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='embassy'</Filter>
      <PointSymbolizer file="&symbols;/poi_embassy.p.000000.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='library'</Filter>
      <PointSymbolizer file="&symbols;/library.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='courthouse'</Filter>
      <PointSymbolizer file="&symbols;/amenity_court.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[waterway]='lock' or [lock]='yes'</Filter>
      <PointSymbolizer file="&symbols;/lock_gate.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[man_made]='mast'</Filter>
      <PointSymbolizer file="&symbols;/communications.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='museum'</Filter>
      <PointSymbolizer file="&symbols;/museum.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity] = 'parking' and ([access] = 'public' or [access] = 'yes' or not [access] != '')</Filter>
      <PointSymbolizer file="&symbols;/parking.p.16.png" allow-overlap="false" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[amenity] = 'parking' and ([access] != '' and not [access] = 'public' and not [access] = 'yes')</Filter>
      <PointSymbolizer file="&symbols;/parking_private.p.16.png" allow-overlap="false" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship' and [religion] = 'christian'</Filter>
      <PointSymbolizer file="&symbols;/christian3.p.14.png" allow-overlap="false" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship' and [religion] = 'muslim'</Filter>
      <PointSymbolizer file="&symbols;/islamic3.p.16.png" allow-overlap="false" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship' and [religion] = 'sikh'</Filter>
      <PointSymbolizer file="&symbols;/sikh3.p.16.png" allow-overlap="false" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship' and [religion] = 'jewish'</Filter>
      <PointSymbolizer file="&symbols;/jewish3.p.16.png" allow-overlap="false" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom16;
      <Filter>[amenity]='place_of_worship'</Filter>
      <PointSymbolizer file="&symbols;/place_of_worship3.p.16.png" allow-overlap="false" placement="interior"/>
     </Rule>
     <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='police'</Filter>
      <PointSymbolizer file="&symbols;/police.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='post_box'</Filter>
      <PointSymbolizer file="&symbols;/post_box.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='post_office'</Filter>
      <PointSymbolizer file="&symbols;/post_office.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='pub'</Filter>
      <PointSymbolizer file="&symbols;/pub.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='biergarten'</Filter>
      <PointSymbolizer file="&symbols;/biergarten.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='recycling'</Filter>
      <PointSymbolizer file="&symbols;/recycling.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='restaurant'</Filter>
      <PointSymbolizer file="&symbols;/restaurant.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='brothel'</Filter>
      <PointSymbolizer file="&symbols;/brothel.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='fast_food'</Filter>
      <PointSymbolizer file="&symbols;/fast_food.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='telephone'</Filter>
      <PointSymbolizer file="&symbols;/telephone.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='emergency_phone'</Filter>
      <PointSymbolizer file="&symbols;/sosphone.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='theatre'</Filter>
      <PointSymbolizer file="&symbols;/theatre.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='toilets'</Filter>
      <PointSymbolizer file="&symbols;/toilets.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17; 
      <Filter>[amenity]='drinking_water'</Filter> 
      <PointSymbolizer file="&symbols;/food_drinkingtap.p.20.png" placement="interior"/>
    </Rule> 
    <Rule> 
      &maxscale_zoom17; 
      <Filter>[amenity]='prison'</Filter> 
      <PointSymbolizer file="&symbols;/amenity_prison.p.20.png" placement="interior"/>
    </Rule> 
    <Rule>
      &maxscale_zoom17;
      <Filter>[tourism]='viewpoint'</Filter>
      <PointSymbolizer file="&symbols;/view_point.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[man_made]='water_tower'</Filter>
      <PointSymbolizer file="&symbols;/tower_water.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[historic]='memorial'</Filter>
      <PointSymbolizer file="&symbols;/tourist_memorial.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[historic]='archaeological_site'</Filter>
      <PointSymbolizer file="&symbols;/tourist_archaeological2.glow.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='supermarket'</Filter>
      <PointSymbolizer file="&symbols;/shop_supermarket.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='bakery'</Filter>
      <PointSymbolizer file="&symbols;/shop_bakery.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='butcher'</Filter>
      <PointSymbolizer file="&symbols;/shop_butcher.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='clothes' or [shop]='fashion'</Filter>
      <PointSymbolizer file="&symbols;/shop_clothes.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='department_store'</Filter>
      <PointSymbolizer file="&symbols;/department_store.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='doityourself'</Filter>
      <PointSymbolizer file="&symbols;/shop_diy.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='florist'</Filter>
      <PointSymbolizer file="&symbols;/florist.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='hairdresser'</Filter>
      <PointSymbolizer file="&symbols;/shop_hairdresser.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='car'</Filter>
      <PointSymbolizer file="&symbols;/shopping_car.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='car_repair'</Filter>
      <PointSymbolizer file="&symbols;/shopping_car_repair.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]='bicycle'</Filter>
      <PointSymbolizer file="&symbols;/shopping_bicycle.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[shop]!=''</Filter>
      <PointSymbolizer file="&symbols;/shop_convenience.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[leisure]='playground'</Filter>
      <PointSymbolizer file="&symbols;/playground.p.20.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[amenity]='picnic_site' or [tourism]='picnic_site' or [leisure]='picnic_table' or [amenity]='picnic_table' or [leisure]='picnic_site'</Filter>
      <PointSymbolizer file="&symbols;/picnic.p.16.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      <Filter>[leisure]='slipway'</Filter>
      <PointSymbolizer file="&symbols;/transport_slipway.p.20.png" placement="interior"/>
    </Rule>
</Style>

<Layer name="amenity-points" status="on" srs="&osm2pgsql_projection;">
    <StyleName>points</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,
amenity,
barrier,
building,
aeroway,
traffic_calming,
information,
"natural",
office,
military,
"generator:source",
sport,
railway,
footway,
emergency,
shop,
tourism,
highway,
man_made,
access,
religion,
waterway,
lock,
historic,
leisure,
"building:type",
landmark,
power_source,
name
      from &prefix;_point
      where 
amenity is not null or
barrier is not null or
building is not null or
aeroway is not null or
traffic_calming is not null or
information is not null or
"natural" is not null or
office is not null or
military is not null or
"generator:source" is not null or
sport is not null or
railway is not null or
footway is not null or
emergency is not null or
shop is not null or
tourism is not null or
highway is not null or
man_made is not null or
access is not null or
religion is not null or
waterway is not null or
lock is not null or
historic is not null or
leisure is not null or
landmark is not null or
"building:type" is not NULL or
power_source is not null or
name is not null

      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="amenity-points-poly" status="on" srs="&osm2pgsql_projection;">
    <StyleName>points</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,
amenity,
barrier,
building,
aeroway,
traffic_calming,
information,
"natural",
office,
military,
"generator:source",
sport,
railway,
footway,
emergency,
shop,
tourism,
highway,
man_made,
access,
religion,
waterway,
lock,
historic,
leisure,
"building:type",
landmark,
power_source,
name
      from &prefix;_polygon
      where 
amenity is not null or
barrier is not null or
building is not null or
aeroway is not null or
traffic_calming is not null or
information is not null or
"natural" is not null or
office is not null or
military is not null or
"generator:source" is not null or
sport is not null or
railway is not null or
footway is not null or
emergency is not null or
shop is not null or
tourism is not null or
highway is not null or
man_made is not null or
access is not null or
religion is not null or
waterway is not null or
lock is not null or
historic is not null or
leisure is not null or
landmark is not null or
"building:type" is not NULL or
power_source is not null or
name is not null
      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
