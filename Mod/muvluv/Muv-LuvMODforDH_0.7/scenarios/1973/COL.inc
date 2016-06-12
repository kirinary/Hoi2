
##############################
# Country definition for COL #
##############################

province =
{ id       = 803
  air_base = { size = 1 current_size = 1 }
  ic       = 1
}            # ÉNÉNÉ^
province =
{ id       = 812
  anti_air = 2
  air_base = { size = 2 current_size = 2 }
  ic       = 8
}            # É{ÉSÉ^
province = { id = 819 ic = 2 } # ÉtÉçÉåÉìÉVÉA
province = { id = 867 ic = 2 } # ÉrÉÑÉrÉZÉìÉVÉI
province = { id = 868 ic = 3 } # ÉJÉä
province =
{ id         = 890
  anti_air   = 2
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
  ic         = 4
}              # ÉoÉâÉìÉLÉÑ

#####################
# Country main data #
#####################

country =
{ tag                 = COL
  energy              = 1000
  metal               = 1000
  rare_materials      = 1000
  oil                 = 1000
  supplies            = 1000
  manpower            = 28
  transports          = 12
  escorts             = 3
  capital             = 812
  regular_id          = U08

  money               = 350
  nationalprovinces   = { 803 812 813 819 867 868 890 }
  ownedprovinces      = { 803 812 813 819 867 868 890 }
  controlledprovinces = { 803 812 813 819 867 868 890 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  landunit =
  { id       = { type = 6001 id = 6232 }
    name     = "ëÊ1åRíc"
    location = 803
    home     = 803
    #mission  = { type = none target = 803 #missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 6001 id = 6234 }
      name          = "ëÊ1é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 6001 id = 6235 }
    name     = "ëÊ2åRíc"
    location = 890
    home     = 890
    #mission  = { type = none target = 890 #missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 6001 id = 6237 }
      name          = "ëÊ2é©ëñéxâáíSï€étíc"
      model         = 2
      brigade_model = 0
      type          = garrison
      strength      = 100
      locked        = yes
    }
  }
  landunit =
  { id       = { type = 6001 id = 6238 }
    name     = "ëÊ3åRíc"
    location = 868
    home     = 868
    #mission  = { type = none target = 868 #missionscope = 0 percentage = 0.0000 night = yes day = yes }
    division =
    { id            = { type = 6001 id = 6240 }
      name          = "ëÊ1ã@äBâªï‡ï∫étíc"
      model         = 2
      brigade_model = 0
      type          = mechanized
      strength      = 100
      locked        = yes
    }
    division =
    { id            = { type = 6001 id = 6241 }
      name          = "ëÊ1ï‡ï∫êÌé‘étíc"
      model         = 2
      brigade_model = 0
      type          = light_armor
      strength      = 100
      locked        = yes
    }
  }
  navalunit =
  { id       = { type = 6002 id = 2407 }
    name     = "ëÊ1êÌë‡"
    location = 890
    home     = 890
    base     = 890
    division =
    { id       = { type = 6002 id = 6242 }
      name     = "ëÊ1É~ÉTÉCÉãí¯étíc"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 6002 id = 6243 }
      name     = "ëÊ2É~ÉTÉCÉãí¯étíc"
      model    = 2
      type     = light_cruiser
      strength            = 100
    }
    division =
    { id       = { type = 6002 id = 6244 }
      name     = "ëÊ1óAëóäÕ/ógó§äÕétíc"
      model    = 3
      type     = transport
      strength            = 100
    }
  }
}
