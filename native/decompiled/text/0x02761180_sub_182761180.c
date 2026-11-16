// sub_182761180
// rva 0x02761180  size 173  section .text  group text
// window base 0x182761180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182761180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // xmm0_8
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
  __int64 v22; // [rsp+20h] [rbp-8h]

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
    return sub_182761240(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18, a7);
  }
  else
  {
    v9 = *(__int64 **)(a3 + 8);
    v10 = *(unsigned int *)(a3 + 20);
    if ( (_DWORD)v10 != 0 )
      v11 = *(__int64 *)((char *)&v9[v10] + v7);
    else
      v11 = *v9;
    result = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v8 + 32) )
    {
      v22 = v11;
      v21 = a5;
      v20 = a3;
      result = MEMORY[0x181EAA920](a1, a2, a3: 34086648);
      v11 = v22;
      a5 = v21;
      a3 = v20;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = result + 16;
      *(_DWORD *)result = 34086648;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
    }
    *(_QWORD *)(result + 8) = v11;
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v21 = a5;
      v20 = a3;
      return sub_18277F280(a1, a2, a3);
    }
  }
  return result;
}
