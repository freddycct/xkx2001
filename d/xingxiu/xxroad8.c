//Cracked by Roath
// Room: /d/xingxiu/xxroad8.c

inherit ROOM;

void create()
{
        set("short", "С·");
        set("long", @LONG
������һ����᫵�С·�ϣ�����������̣�����������
LONG
        );
        set("exits", ([
  "east" : __DIR__"xxroad7",
  "west" : __DIR__"xxh1",
]));

        set("no_clean_up", 0);
        set("outdoors", "xingxiuhai");

	set("cost", 1);
	set("bing_can", 20);
        setup();
        replace_program(ROOM);
}