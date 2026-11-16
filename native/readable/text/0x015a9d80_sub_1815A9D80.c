// sub_15A9D80
// rva 0x015a9d80  size 216  section .text  group text
// window base 0x1815a9d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A9D80(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  unsigned int *v23; // [rsp+18h] [rbp-10h]
  int v24; // [rsp+20h] [rbp-8h]
  unsigned int v25; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
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
    return sub_15A9E60(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  else
  {
    v23 = a3;
    v9 = a3[1];
    if ( (_DWORD)v9 != 0 )
    {
      v22 = v7 + 8 * v9;
      v25 = sub_4FF37C0(a1, a2, a3: v22);
      a3 = v23;
    }
    else
    {
      v25 = 0;
    }
    v10 = a3[2];
    if ( (_DWORD)v10 != 0 )
    {
      v22 = v7 + 8 * v10;
      v24 = sub_4FF37C0(a1, a2, a3: v22);
      a3 = v23;
    }
    else
    {
      v24 = 0;
    }
    v11 = a3[3];
    if ( (_DWORD)v11 != 0 )
    {
      v22 = v7 + 8 * v11;
      v12 = sub_4FF37C0(a1, a2, a3: v22);
    }
    else
    {
      v12 = 0;
      v22 = v7 + 8 * v11;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      v12 = sub_277F280(a1, a2, a3, a4: v25);
    else
      v13 = v25;
    return 31 * (31 * v13 + v24) + v12;
  }
}
