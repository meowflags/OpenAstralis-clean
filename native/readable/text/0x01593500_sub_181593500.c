// sub_1593500
// rva 0x01593500  size 488  section .text  group text
// window base 0x181593500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1593500(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  _BYTE *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  _BYTE *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+18h] [rbp-30h]
  int v19; // [rsp+24h] [rbp-24h]
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+40h] [rbp-8h]

  v21 = a3;
  if ( MEMORY[0x120020e0]/* 0x120020e0 */ == 4 )
  {
    v13 = *(_QWORD **)(a3 + 8);
    if ( v13[13] == 1 )
    {
      *v13 = 0;
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 104LL) = 1;
    }
    else
    {
      v14 = (_BYTE *)*v13;
      if ( (__int64)v14 < 0 )
        v14 = (_BYTE *)(-1 - (int)v14 + 301993984LL);
      if ( *(_BYTE *)(a3 + 25) != 0 )
      {
        v15 = sub_1592220(a1, a2, a3: v14);
        if ( v15 == 0 )
        {
          sub_28C1C40(a1: v16, a2: v17, a3: v3 + 371355680);
LABEL_24:
          sub_28C1C40(a1: v11, a2: v12, a3: v3 + 371355680);
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          __builtin_debugtrap();
          return sub_1593700();
        }
        v14 = (_BYTE *)v15;
        a3 = v21;
      }
      **(_QWORD **)(a3 + 8) = v14;
      *(_QWORD *)(*(_QWORD *)(a3 + 8) + 104LL) = v14 == nullptr;
    }
  }
  result = 1;
  while ( (int)result < 13 )
  {
    v5 = (int)result;
    v6 = (unsigned int)(result + 1);
    if ( *(_BYTE *)((int)result + 0x120020E0LL) == 4 )
    {
      v7 = *(_QWORD *)(a3 + 8);
      v8 = (int)result + 13;
      if ( *(_QWORD *)(v7 + 8 * v8) == 1 )
      {
        *(_QWORD *)(v7 + 8LL * (int)result) = 0;
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v8) = 1;
        result = (unsigned int)v6;
      }
      else
      {
        v9 = *(_BYTE **)(v7 + 8LL * (int)result);
        if ( (__int64)v9 < 0 )
          v9 = (_BYTE *)(-1 - (int)v9 + 301993984LL);
        if ( *(_BYTE *)(a3 + 25) != 0 )
        {
          v20 = (int)result + 13;
          v19 = result + 1;
          v18 = (int)result;
          v10 = sub_1592220(a1: v6, a2: (__int64)v9, a3: v9);
          if ( v10 == 0 )
            goto LABEL_24;
          v9 = (_BYTE *)v10;
          v8 = v20;
          LODWORD(v6) = v19;
          v5 = v18;
          a3 = v21;
        }
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v5) = v9;
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v8) = v9 == nullptr;
        result = (unsigned int)v6;
      }
    }
    else
    {
      result = (unsigned int)v6;
    }
  }
  return result;
}
