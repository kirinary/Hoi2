
##############################
# Country definition for U25 #
##############################

province =
{ id              = 1441
  air_base        = 10
  radar_station   = 10
  
  rocket_test     = 10
  infra           = 2.0
  anti_air        = 10
}                   # 敦煌(トゥンファン)

#####################
# Country main data #
#####################

country =
{ tag                 = U25
  manpower            = 50
  energy              = 100
  metal               = 50
  rare_materials      = 25
  oil                 = 50
  supplies            = 200
  money               = 100
  capital             = 1441
  transports          = 9999
  escorts             = 9999
  extra_tc            = 9999
  policy =
  { democratic        = 1
    political_left    = 1
    freedom           = 1
    free_market       = 1
    professional_army = 1
    defense_lobby     = 10
    interventionism   = 10
  }
  nationalprovinces   = { 1441 }
  ownedprovinces      = { 1441 }
  controlledprovinces = { 1441 1440 1276 2503 1277 1274 1275 1442 1443 1444 1439 1273 1208 1207 1272 2504 1433 1435 1432 1421 1445 1446 1447 
                          1731 1474 1728 1430 1448 1451 1473 1450 1452 2043 1455 1878 1453 1406 1283 }
  techapps            = { 7020 }
  free                = { energy = 1000 manpower = 9 metal = 1000 rare_materials = 1000 oil = 1000 money = 1000 ic = 300 supplies = 1000 }
  landunit =
  { id       = { type = 16001 id = 1 }
    name     = "敦煌ハイヴ"
    location = 1441
    division =
    { type   = garrison
      model  = 14
      id     = { type = 16001 id = 2 }
      name   = "敦煌ハイヴ"
      locked = yes
    }
    division =
    { type   = garrison
      model  = 33
      id     = { type = 16001 id = 3 }
      name   = "門級"
      locked = yes
    }
  }
}
