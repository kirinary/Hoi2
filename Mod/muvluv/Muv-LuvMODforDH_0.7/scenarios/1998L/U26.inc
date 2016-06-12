
##############################
# Country definition for U26 #
##############################

province =
{ id              = 1560
  air_base        = 10
  radar_station   = 10
  
  rocket_test     = 10
  infra           = 2.0
  anti_air        = 10
}                   # クラスノヤルスク

#####################
# Country main data #
#####################

country =
{ tag                 = U26
  manpower            = 50
  energy              = 100
  metal               = 50
  rare_materials      = 25
  oil                 = 50
  supplies            = 200
  money               = 100
  capital             = 1560
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
  nationalprovinces   = { 1560 }
  ownedprovinces      = { 1560 }
  controlledprovinces = { 1560 1417 1418 1535 1538 1547 1561 1562 1384 1412 1413 1414 1415 1416 1520 2660 }
  techapps            = { 7020 }
  free                = { energy = 1000 manpower = 9 metal = 1000 rare_materials = 1000 oil = 1000 money = 1000 ic = 300 supplies = 1000 }
  landunit =
  { id       = { type = 16051 id = 1 }
    name     = "クラスノヤルスクハイヴ"
    location = 1560
    division =
    { type   = garrison
      model  = 14
      id     = { type = 16054 id = 2 }
      name   = "クラスノヤルスクハイヴ"
      locked = yes
    }
    division =
    { type   = garrison
      model  = 33
      id     = { type = 16054 id = 3 }
      name   = "門級"
      locked = yes
    }
  }
}
