//Cracked by Roath
// nuerhong.c  Ů���� 

#include <ansi.h>
inherit ITEM;
inherit F_LIQUID;

void create()
{
	set_name("��ƿ", ({"jiuping", "nuerhong", "bottle"}));
        set_color("$RED$");
	set_weight(700);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("long", @LONG
һ������װŮ����ľ�ƿ�������˼�����Ů�����������ϼ�̳�þ����ڵ��£���
��Ů�������������������Ծ�ζ���񡣾�˵��Ҳ�ر��
LONG
        );
		set("unit", "��");
		set("value", 1600);
		set("max_liquid", 20);
	}

	// because a container can contain different liquid
	// we set it to contain wine at the beginning
	set("liquid", ([
		"type": "alcohol",
		"name": "Ů����",
		"remaining": 20,
		"drunk_apply": 8,
	]));
}