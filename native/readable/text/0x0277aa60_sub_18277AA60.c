// sub_277AA60
// rva 0x0277aa60  size 410  section .text  group text
// window base 0x18277aa60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277AA60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v18; // rax
  char v19; // [rsp+0h] [rbp-18h] BYREF
  __int64 v20; // [rsp+8h] [rbp-10h]
  __int64 v21; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_277AC00();
  }
  else
  {
    v10 = *(unsigned int *)(v8 + 376643052);
    v11 = v8 + 376643048;
    if ( (_DWORD)v10 != 0 )
    {
      v21 = v8 + 8 * v10;
      v12 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v12 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v12 = sub_1EAA920(a1, a2, a3: 40541432, a4: v11);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v12 + 40;
        *(_DWORD *)v12 = 40541432;
        *(_DWORD *)(v12 + 4) = 0;
        *(_QWORD *)(v12 + 8) = 0;
        *(_QWORD *)(v12 + 16) = 0;
        *(_QWORD *)(v12 + 24) = 0;
        *(_QWORD *)(v12 + 32) = 0;
      }
      v20 = v12;
      *(_DWORD *)(v12 + 4) = 47083563;
      v13 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v13 + 48) > *(_QWORD *)(v9 + 32) )
      {
        v13 = sub_1EAA920(a1, a2, a3: 34162832);
        v12 = v20;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v13 + 48;
        *(_DWORD *)v13 = 34162832;
        *(_DWORD *)(v13 + 4) = 0;
        *(_QWORD *)(v13 + 8) = 0;
        *(_QWORD *)(v13 + 16) = 0;
        *(_QWORD *)(v13 + 24) = 0;
        *(_QWORD *)(v13 + 32) = 0;
        *(_QWORD *)(v13 + 40) = 0;
      }
      *(_DWORD *)(v13 + 20) = 1061158912;
      *(_DWORD *)(v12 + 24) = (unsigned __int64)(v13 - v8) >> 3;
      if ( (*(_DWORD *)v12 & 2) != 0 )
      {
        v18 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v18) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v18) >> 9) + 0x38) = 0;
      }
      sub_27829A0(a1, a2, a3: v8 + 376656272, a4: v11, a5: v12, a6: 0, a7: v19);
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280(a1: v15, a2: v16, a3: v14);
      return v8 + 8LL * *(unsigned int *)(v20 + 24);
    }
    else
    {
      return sub_18277AB81(a1, a2, a3: 0, a4: v11, a5, a6, a7, a8);
    }
  }
}
