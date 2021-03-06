
##############################
# Country definition for U15 #
##############################

province = { id = 1156 air_base = 10 radar_station = 10  rocket_test = 10 infra = 2.0  anti_air = 10 } # ���F���X�N

#####################
# Country main data #
#####################

country =
{ tag                 = U15
  manpower            = 99999
  energy              = 900000
  metal               = 900000
  rare_materials      = 900000
  oil                 = 900000
  supplies            = 900000
  money               = 900000
  capital             = 1156
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
  nationalprovinces   = { 1156 }
  ownedprovinces      = { 1156 }
  controlledprovinces = { 1156 133 134 135 150 151 152 153 154 165 183 184  1534 1771 94 123 156 157 158 159 160 163 164 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 181 182 185 186
                          187 188 189 190 191 192 200 201 215 216 219 264 275 276 277 278 279 280 281 283 284 285 286 287 288 289 1150 1155
                          1533 1536 1564 1596 1597 1598 1774 1775 1776 1777 1778 1780 1781 1782 1783 1828 1829 1830 1831 1832 1833 1834 1836
                          1839 1840 1841 2240 2488 }
  techapps            = { 7020 }
  free                = { energy = 1000 manpower = 9 metal = 1000 rare_materials = 1000 oil = 1000 money = 1000 ic = 300 supplies = 1000 }
  landunit =
  { id       = { type = 15151 id = 4075 }
    name     = "��2�R�c"
    location = 1806
    division =
    { id            = { type = 15151 id = 4077 }
      name          = "��2�i�ߌQ"
      model         = 33
      brigade_model = 0
      extra         = light_armor_brigade
      type          = hq
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 15151 id = 4113 }
    name     = "��6�R�c"
    location = 407
    division =
    { id            = { type = 15151 id = 4115 }
      name          = "��23BETA�Q"
      model         = 33
      brigade_model = 0
      type          = marine
      extra         = super_heavy_armor
      strength      = 100
    }
    division =
    { id            = { type = 15151 id = 4118 }
      name          = "��7BETA�Q"
      model         = 33
      brigade_model = 0
      type          = bergsjaeger
      extra         = heavy_armor
      strength      = 100
    }
    division =
    { id            = { type = 15151 id = 4121 }
      name          = "��26BETA�Q"
      model         = 33
      brigade_model = 0
      type          = infantry
      extra         = super_heavy_armor
      strength      = 100
    }
    division =
    { id            = { type = 15151 id = 4122 }
      name          = "��27BETA�Q"
      model         = 33
      brigade_model = 0
      type          = infantry
      extra         = super_heavy_armor
      strength      = 100
    }
    division =
    { id            = { type = 15151 id = 4123 }
      name          = "��28BETA�Q"
      model         = 33
      brigade_model = 0
      type          = infantry
      extra         = heavy_armor
      strength      = 100
    }
  }
  landunit =
  { id       = { type = 15151 id = 1 }
    name     = "���F���X�N�n�C��"
    location = 1156
    division =
    { type  = garrison
      model = 13
      id    = { type = 15154 id = 1 }
      name  = "���F���X�N�n�C��"
    }
    division =
    { type  = garrison
      model = 33
      id    = { type = 15154 id = 2 }
      name  = "�勉"
    }
  }
}
