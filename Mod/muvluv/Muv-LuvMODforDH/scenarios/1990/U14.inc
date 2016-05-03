
##############################
# Country definition for U14 #
##############################

province = { id = 1568 air_base = 10 radar_station = 10  rocket_test = 10 infra = 2.0  anti_air = 10 } # ウラリスク

#####################
# Country main data #
#####################

country =
{ tag                 = U14
  manpower            = 99999
  energy              = 900000
  metal               = 900000
  rare_materials      = 900000
  oil                 = 900000
  supplies            = 900000
  money               = 900000
  capital             = 1568
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
  nationalprovinces   = { 1568 }
  ownedprovinces      = { 1568 }
  controlledprovinces = { 1568 162 255 256 257 269 270 271 1149 1151 1837 1838 1842 1843 1844 1845 1846 1847 1848 1849 1850 1856 1857 1858 1907 2470 }
  techapps            = { 7020 }
  free                = { energy = 1000 manpower = 9 metal = 1000 rare_materials = 1000 oil = 1000 money = 1000 ic = 300 supplies = 1000 }
  landunit =
  { id       = { type = 15101 id = 1 }
    name     = "ウラリスクハイヴ"
    location = 1568
    division =
    { type   = garrison
      model  = 15
      id     = { type = 15104 id = 1 }
      name   = "ウラリスクハイヴ"
      locked = yes
    }
    division =
    { type   = garrison
      model  = 33
      id     = { type = 15104 id = 2 }
      name   = "門級"
      locked = yes
    }
  }
}
