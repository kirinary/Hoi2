
##############################
# Country definition for U19 #
##############################

province = { id = 130 air_base = 10 radar_station = 10 rocket_test = 10 infra = 2.0 anti_air = 10 } # ロヴァニエミ

#####################
# Country main data #
#####################

country =
{ tag                 = U19
  manpower            = 999999
  energy              = 999999
  metal               = 999999
  rare_materials      = 999999
  oil                 = 999999
  supplies            = 999999
  money               = 999999
  capital             = 130
  extra_tc            = 9999
  transports          = 9999
  escorts             = 9999
  belligerence        = 99999
  nationalprovinces   = { 130 }
  ownedprovinces      = { 130 }
  controlledprovinces = { 130 }
  techapps            = { 
                         1130 1230 1570 1670 1770 1870 1970
                         2010 2020 2030 2040 2050 2310 2320 2610 2620 2910 2920 
                         1130 1230 1570 1670 1770 1870 1970
                         2010 2020 2030 2040 2050 2310 2320 2610 2620 2910 2920 50020 50030 50040 50070 50080 50090 50100 50090 50100 5600 5610 5620 5630 5640 7010 7020 7030 7040 7050 7060 7070 7950 }
  policy =
  { democratic        = 1
    political_left    = 1
    freedom           = 1
    free_market       = 1
    professional_army = 1
    defense_lobby     = 10
    interventionism   = 10
  }
  free                = { ic = 300 energy = 9000 metal = 9000 rare_materials = 9000 oil = 9000 money = 1000 manpower = 9 }
  # ハイヴ防衛部隊
  landunit =
  { id       = { type = 16001 id = 1 }
    name     = "ロヴァニエミハイヴ"
    location = 130
    division =
    { type   = garrison
      model  = 13
      id     = { type = 16001 id = 2 }
      name   = "ロヴァニエミハイヴ"
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
