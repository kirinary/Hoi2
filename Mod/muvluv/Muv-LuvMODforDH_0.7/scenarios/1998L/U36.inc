
##############################
# Country definition for U36 #
##############################

province =
{ id              = 2651
  air_base        = 10
  radar_station   = 10
  
  rocket_test     = 10
  infra           = 10
  anti_air        = 10
}                   # ƒGƒ”ƒFƒ“ƒXƒN

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
  belligerence        = 9999
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
    name     = "ƒGƒ”ƒFƒ“ƒXƒNƒnƒCƒ”"
    location = 2651
    division =
    { type   = garrison
      model  = 14
      id     = { type = 16054 id = 2 }
      name   = "ƒGƒ”ƒFƒ“ƒXƒNƒnƒCƒ”"
      locked = yes
    }
    division =
    { type   = garrison
      model  = 33
      id     = { type = 16054 id = 3 }
      name   = "–å‹‰"
      locked = yes
    }
  }
    landunit =
  { id       = { type = 17151 id = 65 }
    name     = "‘æ6ŒR’c"
    location = 2647
    division =
    { id            = { type = 17151 id = 66 }
      name          = "‘æ3BETAŒQ"
      model         = 33
      brigade_model = 0
      type          = marine
      extra         = super_heavy_armor
      strength      = 100.0000
    }
    division =
    { id            = { type = 17151 id = 67 }
      name          = "‘æ3BETAŒQ"
      model         = 33
      brigade_model = 0
      type          = bergsjaeger
      extra         = heavy_armor
      strength      = 100.0000
    }
    division =
    { id            = { type = 17151 id = 68 }
      name          = "‘æ7BETAŒQ"
      model         = 33
      brigade_model = 0
      type          = infantry
      extra         = super_heavy_armor
      strength      = 100.0000
    }
    division =
    { id            = { type = 17151 id = 69 }
      name          = "‘æ7BETAŒQ"
      model         = 33
      brigade_model = 0
      type          = infantry
      extra         = super_heavy_armor
      strength      = 100.0000
    }
    division =
    { id            = { type = 17151 id = 70 }
      name          = "‘æ9BETAŒQ"
      model         = 33
      brigade_model = 0
      type          = infantry
      extra         = light_armor_brigade
      strength      = 100.0000
    }
  }
  landunit =
  { id       = { type = 17151 id = 71 }
    name     = "‘æ6ŒR’c"
    location = 2647
    division =
    { id            = { type = 17151 id = 72 }
      name          = "‘æ3BETAŒQ"
      model         = 33
      brigade_model = 0
      type          = marine
      extra         = super_heavy_armor
      strength      = 100.0000
    }
    division =
    { id            = { type = 17151 id = 73 }
      name          = "‘æ3BETAŒQ"
      model         = 33
      brigade_model = 0
      type          = bergsjaeger
      extra         = heavy_armor
      strength      = 100.0000
    }
    division =
    { id            = { type = 17151 id = 74 }
      name          = "‘æ7BETAŒQ"
      model         = 33
      brigade_model = 0
      type          = infantry
      extra         = super_heavy_armor
      strength      = 100.0000
    }
    division =
    { id            = { type = 17151 id = 75 }
      name          = "‘æ7BETAŒQ"
      model         = 33
      brigade_model = 0
      type          = infantry
      extra         = super_heavy_armor
      strength      = 100.0000
    }
    division =
    { id            = { type = 17151 id = 76 }
      name          = "‘æ9BETAŒQ"
      model         = 33
      brigade_model = 0
      type          = infantry
      extra         = light_armor_brigade
      strength      = 100.0000
    }
  }
}
