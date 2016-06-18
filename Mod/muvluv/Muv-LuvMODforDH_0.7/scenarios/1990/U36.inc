
##############################
# Country definition for U36 #
##############################

province =
{ id              = 2651
  air_base        = 10
  radar_station   = 10
  
  rocket_test     = 10
  infra           = 2.0
  anti_air        = 10
}                   # エヴェンスク

#####################
# Country main data #
#####################

country =
{ tag                 = U36
  manpower            = 50
  energy              = 100
  metal               = 50
  rare_materials      = 25
  oil                 = 50
  supplies            = 200
  money               = 100
  capital             = 2651
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
  ownedprovinces      = { 2651 }
  controlledprovinces = { 1167 2647 2649 2650 2651 2652 2653 2654  }
  nationalprovinces   = { 2651 }
  techapps            = { 7020 }
  free                = { energy = 1000 manpower = 9 metal = 1000 rare_materials = 1000 oil = 1000 money = 1000 ic = 300 supplies = 1000 }
  landunit =
  { id       = { type = 16051 id = 1 }
    name     = "エヴェンスクハイヴ"
    location = 2651
    division =
    { type   = garrison
      model  = 14
      id     = { type = 16054 id = 2 }
      name   = "エヴェンスクハイヴ"
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
