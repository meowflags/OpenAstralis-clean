// sub_1827584C0
// rva 0x027584c0  size 175  section .text  group text
// window base 0x1827584c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827584C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // xmm0_8
  __int64 result; // rax
  int v15; // edx
  int v16; // ecx
  int v17; // edi
  int v18; // esi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+20h] [rbp-8h]

  v23 = a3;
  v22 = a5;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    sub_182758580(a1: v17, a2: v18, a3: v15, a4: v16, a5: v19, a6: v20, a7);
  }
  sub_18275A260(a1, a2, a3, a4: a5);
  v11 = v23;
  v12 = *(__int64 **)(v23 + 8);
  if ( v22 == v7 )
    v13 = *v12;
  else
    v13 = *(__int64 *)((char *)v12 + v22);
  result = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v8 + 32) )
  {
    v24 = v13;
    result = MEMORY[0x181EAA920](a1: v9, a2: v10, a3: 34086648);
    v13 = v24;
    v11 = v23;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = result + 16;
    *(_DWORD *)result = 34086648;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = 0;
  }
  *(_QWORD *)(result + 8) = v13;
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_18277F280(a1: v9, a2: v10, a3: v11);
  return result;
}
