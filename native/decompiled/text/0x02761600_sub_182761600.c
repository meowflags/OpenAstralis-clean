// sub_182761600
// rva 0x02761600  size 173  section .text  group text
// window base 0x182761600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182761600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int *v9; // rax
  __int64 v10; // rcx
  int v11; // xmm0_4
  __int64 result; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  int v22; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_1827616C0(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18, a7);
  }
  v9 = *(int **)(a3 + 8);
  v10 = *(unsigned int *)(a3 + 20);
  if ( (_DWORD)v10 != 0 )
    v11 = *(int *)((char *)&v9[2 * v10] + v7);
  else
    v11 = *v9;
  result = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v8 + 32) )
  {
    v22 = v11;
    v21 = a5;
    v20 = a3;
    result = MEMORY[0x181EAA920](a1, a2, a3: 34239568);
    v11 = v22;
    a5 = v21;
    a3 = v20;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = result + 16;
    *(_DWORD *)result = 34239568;
    *(_DWORD *)(result + 4) = 0;
    *(_QWORD *)(result + 8) = 0;
  }
  *(_DWORD *)(result + 4) = v11;
  if ( *(int *)(v8 + 16) <= 0 )
  {
    v21 = a5;
    v20 = a3;
    return sub_18277F280(a1, a2, a3);
  }
  return result;
}
