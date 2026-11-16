// sub_182783520
// rva 0x02783520  size 310  section .text  group text
// window base 0x182783520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182783520(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 i; // rax
  __int64 (*v10)(void); // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+3Ch] [rbp-Ch]

  if ( a3 != 0 )
  {
    v14 = a3;
  }
  else
  {
    v14 = 0;
    sub_182780CC0();
  }
  v6 = *(_QWORD *)(v5 + 376178832);
  if ( v6 != 0 )
  {
    v12 = *(_QWORD *)(v5 + 376178832);
    v10 = MEMORY[0x10E44920];
    v7 = MEMORY[0x10E44920]();
    v6 = v12;
    if ( v7 != *(_QWORD *)(v12 + 224) )
    {
      for ( i = *(_QWORD *)(v12 + 256); ; i = *(_QWORD *)(v13 + 256) )
      {
        if ( i == 0 )
        {
          v6 = 0;
          goto LABEL_5;
        }
        v13 = i;
        if ( v10() == *(_QWORD *)(i + 224) )
          break;
      }
      v6 = v13;
    }
  }
LABEL_5:
  if ( a5 != 0 )
  {
    if ( v6 != 0 )
    {
      v11 = v6;
      sub_182778980(a1, a2, a3: v6);
    }
    else
    {
      v11 = 0;
    }
  }
  else
  {
    v11 = v6;
  }
  if ( v14 == 0 )
    sub_182781300(a1, a2);
  return v11;
}
