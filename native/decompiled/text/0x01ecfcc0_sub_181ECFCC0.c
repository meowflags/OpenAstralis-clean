// sub_181ECFCC0
// rva 0x01ecfcc0  size 188  section .text  group text
// window base 0x181ecfcc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ECFCC0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 (*v9)(void); // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  _DWORD *v16; // rdx
  __int64 v17; // r8
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // [rsp+0h] [rbp-28h] BYREF
  __int64 v30; // [rsp+8h] [rbp-20h]
  __int64 v31; // [rsp+10h] [rbp-18h]
  __int64 v32; // [rsp+18h] [rbp-10h]
  _DWORD *v33; // [rsp+20h] [rbp-8h]

  v33 = a3;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v8 + 8) )
  {
    v32 = a6;
    v31 = a5;
    sub_181EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v29);
    goto LABEL_6;
  }
  v32 = a6;
  v31 = a5;
  v9 = (__int64 (*)(void))(v6 + *(_QWORD *)(v7 + 8LL * (*a3 >> 3) + 112));
  v30 = v7 + 52423576;
  v10 = v9();
  MEMORY[0x182852B20](a1: v10, a2: v12, a3: v30, a4: v11, a5: v32, a6: v31);
  v16 = v33;
  v17 = (unsigned int)v33[2];
  if ( (_DWORD)v17 == 0 )
  {
LABEL_6:
    MEMORY[0x182771080](a1: v14, a2: v15, a3: v16, a4: v13, a5: v31, a6: v32);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181ECFD80(a1: v25, a2: v26, a3: v23, a4: v24, a5: v27, a6: v28);
  }
  v30 = v7 + 8 * v17;
  result = MEMORY[0x1859E7560](a1: 0, a2: v15, a3: v30, a4: v13, a5: v32, a6: v31);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v21, a2: v22, a3: v19, a4: v20, a5: v30);
  return result;
}
