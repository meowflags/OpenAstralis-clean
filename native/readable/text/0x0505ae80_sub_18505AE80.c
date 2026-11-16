// sub_505AE80
// rva 0x0505ae80  size 308  section .text  group text
// window base 0x18505ae80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_505AE80(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10)
{
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  __int64 v26; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v11 + 8) )
  {
    sub_1EB84E0();
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
    return sub_505AFC0();
  }
  else
  {
    v12 = *(_QWORD *)(v11 + 40);
    v13 = v12 + 64;
    if ( (unsigned __int64)(v12 + 64) > *(_QWORD *)(v11 + 32) )
    {
      return sub_18505AF76(a1, a2, a3, a4, a5: v12, a6: v13, a7, a8, a9, a10);
    }
    else
    {
      *(_QWORD *)(v11 + 40) = v13;
      *(_DWORD *)v12 = 43317808;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0;
      *(_QWORD *)(v12 + 40) = 0;
      *(_QWORD *)(v12 + 48) = 0;
      *(_QWORD *)(v12 + 56) = 0;
      v25 = v12;
      v26 = a3;
      sub_5F23300(a1: a3, a2, a3: v12, a4, a5: v10 + 377216112, a6: 0xFFFFFFFFLL);
      v17 = *(_QWORD *)(v11 + 40);
      if ( (unsigned __int64)(v17 + 24) > *(_QWORD *)(v11 + 32) )
      {
        v17 = sub_1EAA920(a1: v15, a2: v16, a3: 43318112);
      }
      else
      {
        *(_QWORD *)(v11 + 40) = v17 + 24;
        *(_DWORD *)v17 = 43318112;
        *(_DWORD *)(v17 + 4) = 0;
        *(_QWORD *)(v17 + 8) = 0;
        *(_QWORD *)(v17 + 16) = 0;
      }
      v24 = v17;
      sub_5FDD440(a1: v15, a2: v16, a3: v17, a4: v14, a5: v25);
      if ( *(int *)(v11 + 16) <= 0 )
        sub_277F280(a1: v20, a2: v21, a3: v18, a4: v19, a5: v25);
      return v24;
    }
  }
}
