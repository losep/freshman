#include <ansi.h>

inherit ITEM;

void create()
{
        set_name(HIW"����"NOR, ({"ming ce","ce"}));
        set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "��");
                set("long",
"                       ������ѧ�鼮����                \n"
"\n"

"     ���������š������������������������������У����ۣ�\n" 
"     ��ȭ�����š������������������������������У����ۣ�\n" 
"     �����¾����������������ڳ��ٹ�����˵����ɽҲ���ղ�\n" 
"     ����ħɽ�ľ�������˵���ô��飬�����������ʹ�仨��\n" 
"     �������������������������տɵ�����Ը��������������\n" 
"     ��Ů�������������������������������������������¹�\n" 
"     ���������ס����������������˿���ʫ���Դ��黻�úþ�\n" 
"     ����վ�������������������������������������������\n" 
"     �����顽���������������������������������ڳ����Ƕ�\n" 
"     ���������顽�������������ô������ҳ���������������\n" 
"     �����ؾ������������������������Ҹ���ׯ������ͷ��\n" 
"     ��ǧ���ġ���������������������������ɽ�������д���\n" 
"     ��ȭ���������������������������������������������\n" 
"     �����־����������������������������������У����ۣ�\n" 
"     ��ǹ����顽�����������������������������ƽ�������\n" 
"     ���ȷ���Ҫ����������������������������������������\n" 
"     ����ˮ��������������˵�����ڰ�����һ�ϸ��˼��м���\n" 
"     ���鲼ͷ��������������������������������ɽ��������\n" 

"\n\n"
"                                             ˳�����ʵ\n");
                set("material", "paper");
        }
  set("is_monitored",1);
  setup();
}