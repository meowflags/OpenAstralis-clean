// sub_2761C80
// rva 0x02761c80  size 235  section .text  group text
// window base 0x182761c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2761C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  char v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    v23 = a5;
    v22 = a3;
    sub_1EB84E0();
    goto LABEL_16;
  }
  v9 = *(__int64 **)(a3 + 8);
  v10 = *(unsigned int *)(a3 + 20);
  if ( (_DWORD)v10 != 0 )
    v11 = *(__int64 *)((char *)&v9[v10] + v7);
  else
    v11 = *v9;
  if ( (unsigned __int64)(v11 + 128) >= 0x100 )
  {
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v24 = v11;
      v23 = a5;
      v22 = a3;
      v13 = sub_1EAA920(a1, a2, a3: 34083616);
      v11 = v24;
      a3 = v22;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13 + 16;
      *(_DWORD *)v13 = 34083616;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
    }
    *(_QWORD *)(v13 + 8) = v11;
    goto LABEL_7;
  }
  v12 = (unsigned int)(v11 + 128);
  if ( (unsigned int)v12 >= 0x100 )
  {
LABEL_16:
    sub_2770B00(a1, a2, a3, a4: v12, a5, a6, a7: v21);
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
    return sub_2761D80(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  v13 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v12 + 376352092);
LABEL_7:
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1, a2, a3);
  return v13;
}
