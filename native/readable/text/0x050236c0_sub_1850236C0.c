// sub_50236C0
// rva 0x050236c0  size 402  section .text  group text
// window base 0x1850236c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_50236C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned int v8; // r8d
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int16 v13; // bp
  __int64 v14; // rsi
  unsigned __int16 v15; // di
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int16 v18; // bp
  unsigned __int16 v19; // r9
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+10h] [rbp-18h]
  unsigned int v22; // [rsp+18h] [rbp-10h]
  unsigned int v23; // [rsp+1Ch] [rbp-Ch]
  unsigned int v24; // [rsp+20h] [rbp-8h]
  unsigned int v25; // [rsp+24h] [rbp-4h]

  v21 = a3;
  v25 = a5;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( a3 != v5 )
  {
    v24 = *(_DWORD *)(a3 + 8) >> 1;
    sub_632A360(a1: v5 + 376643464, a2, a3: a5, a4, a5: v24);
    v8 = v25 - 1;
    result = v25;
    v10 = (unsigned int)((int)(v25 - 2) >> 1);
    if ( (int)v10 < 0 )
    {
      v24 = (int)(v25 - 2) >> 1;
      v16 = 0;
      v11 = v21;
    }
    else
    {
      v11 = v21;
      v12 = (int)((v25 - 2) & 0xFFFFFFFE);
      v13 = *(_WORD *)(v21 + v12 + 12);
      v14 = (int)(2 * (v8 - v10));
      v15 = *(_WORD *)(v21 + v14 + 12);
      *(_WORD *)(v21 + v12 + 12) = v15;
      *(_WORD *)(v11 + v14 + 12) = v13;
      if ( v15 >= 0xD800u )
        JUMPOUT(0x30A03E769LL);
      v7 = 1;
      if ( v13 >= 0xE000u )
        JUMPOUT(0x30A03E778LL);
      if ( v13 >= 0xD800u )
        JUMPOUT(0x30A03E780LL);
      v16 = 0;
      v10 = (unsigned int)(v10 - 1);
      while ( (int)v10 >= 0 )
      {
        v17 = 2 * (int)v10;
        v18 = *(_WORD *)(v11 + v17 + 12);
        v7 = (int)(2 * (v8 - v10));
        v19 = *(_WORD *)(v11 + v7 + 12);
        *(_WORD *)(v11 + v17 + 12) = v19;
        *(_WORD *)(v11 + v7 + 12) = v18;
        v10 = (unsigned int)(v10 - 1);
        if ( v18 >= 0xD800u && v18 < 0xE000u )
        {
          v16 = 1;
        }
        else if ( v19 >= 0xD800u && v19 < 0xE000u )
        {
          v16 = 1;
        }
      }
      v24 = v10;
    }
    if ( (_DWORD)v16 != 0 )
    {
      v23 = v16;
      v22 = v8;
      result = sub_5023860(a1: v16, a2: v7, a3: v11, a4: v10, a5: (unsigned int)result);
    }
    else
    {
      v23 = 0;
      v22 = v8;
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280(a1: v23);
    return result;
  }
  sub_2771080();
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
  return ((__int64 (*)(void))sub_5023860)();
}
