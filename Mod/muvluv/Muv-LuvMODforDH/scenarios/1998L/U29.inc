
##############################
# Country definition for U29 #
##############################

province =
{ id              = 1404
  air_base        = 10
  radar_station   = 10
  
  rocket_test     = 10
  infra           = 2.0
  anti_air        = 10
}                   # ウランバートル

#####################
# Country main data #
#####################

country =
{ tag                 = U29
  manpower            = 50
  energy              = 100
  metal               = 50
  rare_materials      = 25
  oil                 = 50
  supplies            = 200
  money               = 100
  capital             = 1404
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
  nationalprovinces   = { 1404 }
  ownedprovinces      = { 1404 }
  controlledprovinces = { 1404 1385 1419 1420 1434 1438 }
  techapps            = { 7020 }
  free                = { energy = 1000 manpower = 9 metal = 1000 rare_materials = 1000 oil = 1000 money = 1000 ic = 300 supplies = 1000 }
  landunit =
  { id       = { type = 17101 id = 1 }
    name     = "ウランバートルハイヴ"
    location = 1404
    division =
    { type  = garrison
      model = 13
      id    = { type = 17101 id = 2 }
      name  = "ウランバートルハイヴ"
    }
    division =
    { type  = garrison
      model = 33
      id    = { type = 17101 id = 3 }
      name  = "門級"
    }
  }
}
