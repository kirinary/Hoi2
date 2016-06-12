
##############################
# Country definition for U16 #
##############################

province = { id = 212 ic = 400 energy = 500 metal = 500 rare_materials = 500 oil = 500 manpower = 9 infra = 2.0 } # ミンスク

#####################
# Country main data #
#####################

country =
{ tag                 = U16
  manpower            = 999999
  energy              = 999999
  metal               = 999999
  rare_materials      = 999999
  oil                 = 999999
  supplies            = 999999
  money               = 999999
  capital             = 212
  extra_tc            = 9999
  transports          = 9999
  escorts             = 9999
  belligerence        = 99999
  nationalprovinces   = { 212 }
  ownedprovinces      = { 212 }
  controlledprovinces = { 212 }
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
  # ハイヴ防衛部隊
  landunit =
  { id       = { type = 15011 id = 1 }
    name     = "ミンスクハイヴ"
    location = 212
    division =
    { type   = garrison
      model  = 13
      id     = { type = 15011 id = 2 }
      name   = "ミンスクハイヴ"
      locked = yes
    }
    division =
    { type   = garrison
      model  = 33
      id     = { type = 10011 id = 3 }
      name   = "門級"
      locked = yes
    }
  }
}
