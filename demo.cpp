  buy_vip:
    material: NAME_TAG
    slot: 12
    display_name: "&6购买会员"
    lore:
      - "&8✧✧✧ &dVIP尊享特权 &8✧✧✧"
      - "&7花费25点券兑换一个月会员"
      - "&6-25点券"
      - ""
      - "&e🔸 两倍空岛半径"
      - "&e🔸 签到奖励×3"
      - "&e🔸 商城金币消费半价"
      - "&e🔸 /ec 随身末影箱"
      - "&e🔸 /sp 切换旁观模式"
      - "&e🔸 探险死亡不掉落"
      - ""
      - "&a立即购买，尊享特权！"
    view_requirement:
      requirements:
        has_enough_points:
          type: javascript
          expression: "%playerpoints_points% >= 25"
        no_vip:
          type: string equals
          input: '%luckperms_in_group_vip%'
          output: 'no'
    left_click_requirement:
      requirements:
        has_enough_points:
          type: javascript
          expression: "%playerpoints_points% >= 25"
      deny_commands:
        - "[message] &c点券不足，需要25点券！"
        - "[close]"
    left_click_commands:
      - "[console] p take %player_name% 25"
      - "[console] lp user %player_name% parent addtemp vip 30d"
      - "[message] &a成功兑换一个月会员！"
      - "[close]"
    priority: 0

  disable_buy_vip:
    material: NAME_TAG
    slot: 12
    display_name: "&6购买会员"
    lore:
      - "&8✧✧✧ &dVIP尊享特权 &8✧✧✧"
      - "&7花费25点券兑换一个月会员"
      - "&6-25点券"
      - ""
      - "&e🔸 两倍空岛半径"
      - "&e🔸 签到奖励×3"
      - "&e🔸 商城金币消费半价"
      - "&e🔸 /ec 随身末影箱"
      - "&e🔸 /sp 切换旁观模式"
      - "&e🔸 探险死亡不掉落"
      - ""
      - "&c✘ 点券不足，无法购买"
    view_requirement:
      requirements:
        has_enough_points:
          type: javascript
          expression: "%playerpoints_points% < 25"
    priority: 1