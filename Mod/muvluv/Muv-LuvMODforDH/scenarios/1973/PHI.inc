
##############################
# Country definition for PHI #
##############################

province = { id = 1735 ic = 1 } # プエルト・プリンセサ
province =
{ id         = 1737
  anti_air   = 2
  naval_base = { size = 2 current_size = 2 }
  air_base   = { size = 2 current_size = 2 }
  ic         = 5
}              # マニラ
province =
{ id         = 1738
  anti_air   = 2
  landfort   = 1
  air_base   = { size = 2 current_size = 2 }
  Naval_base = { size = 4 current_size = 4 }
  ic         = 1
}              # オロンガポ
province =
{ id       = 1744
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
}            # カルバヨグ
province = { id = 1745 ic = 1 } # タクロバン
province =
{ id       = 1750
  anti_air = 1
  air_base = { size = 2 current_size = 2 }
  ic       = 2
}            # ダバオ

#####################
# Country main data #
#####################

country =
{ tag                 = PHI
  energy              = 200
  metal               = 200
  rare_materials      = 200
  oil                 = 200
  supplies            = 500
  money               = 10
  manpower            = 21
  transports          = 50
  capital             = 1737
  regular_id          = U04
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    freedom           = 4
    free_market       = 5
    professional_army = 1
    defense_lobby     = 3
    interventionism   = 1
  }
  ownedprovinces      = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  controlledprovinces = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
  techapps            = { 10050 1010  10190 1020  1110  1120  1210  1550  1650  3010  3020  3110  3460  3810  3910  4390  50020 5010  5020  50290
                          50300 5090  5410  5600  7010  80080 8010  8020  8030  8040  8050  8060  8070  8080  9010 
                          9340  6050  6060  6070  6080
                        }
  nationalprovinces   = { 1735 1736 1737 1738 1739 1740 1741 1742 1743 1744 1745 1746 1747 1748 1749 1750 }
}
