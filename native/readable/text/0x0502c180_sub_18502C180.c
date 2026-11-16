// sub_502C180
// rva 0x0502c180  size 179  section .text  group text
// window base 0x18502c180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502C180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 result; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  _QWORD v25[3]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+18h] [rbp-10h]
  __int64 v27; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)v25 <= *(_QWORD *)(v8 + 8) )
  {
    v27 = a3;
    sub_1EB84E0();
    goto LABEL_13;
  }
  v27 = a3;
  v9 = sub_631C320();
  v13 = v7 + 43305808;
  v14 = v7 + 359081680;
  if ( v9 == v7 )
  {
    v17 = v7 + 377209440;
    goto LABEL_6;
  }
  v15 = *(unsigned int *)(v9 + 28);
  if ( (_DWORD)v15 == 0 )
  {
LABEL_13:
    sub_2771080(a1: v11, a2: v12, a3: v27, a4: v10, a5: v13, a6: v14);
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
    return sub_502C240(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24, a7);
  }
  v16 = *(unsigned int *)(v7 + 8 * v15 + 4);
  if ( (_DWORD)v16 != 0 )
  {
    v17 = v7 + 8 * v16;
LABEL_6:
    v25[2] = v17;
    v26 = v9;
    sub_4F9ED80(a1: v9, a2: 0, a3: v17, a4: v17, a5: v13, a6: v14);
    goto LABEL_7;
  }
  v26 = v9;
LABEL_7:
  result = sub_4FC6240(a1: v11, a2: v12, a3: v7 + 376351480, a4: v10, a5: v26, a6: v27);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
