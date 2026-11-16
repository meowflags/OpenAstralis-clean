// sub_181E607E0
// rva 0x01e607e0  size 253  section .text  group text
// window base 0x181e607e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181E607E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // r9
  _DWORD *v10; // rdi
  _DWORD *result; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v13; // [rsp+10h] [rbp-28h]
  _DWORD *v14; // [rsp+18h] [rbp-20h]
  __int64 v15; // [rsp+20h] [rbp-18h]
  _DWORD *v16; // [rsp+28h] [rbp-10h]
  unsigned int v17; // [rsp+30h] [rbp-8h]
  unsigned int v18; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    v16 = a5;
    v15 = a3;
    result = (_DWORD *)MEMORY[0x181EB84E0]();
    goto LABEL_11;
  }
  if ( a5 != v5 && *a5 >> 3 != 4260808 )
  {
    v16 = a5;
    v15 = a3;
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4, a5: v5 + 8521616);
    return (_DWORD *)MEMORY[0x18277F280]();
  }
  v16 = a5;
  v7 = *(unsigned __int8 *)(a3 + 16);
  v8 = *(_DWORD *)(a3 + 12);
  v9 = &v5[2 * *(unsigned int *)(a3 + 4)];
  v10 = &v5[2 * *(unsigned int *)(a3 + 8)];
  v15 = a3;
  v14 = v9;
  v13 = v10;
  v18 = v7;
  v17 = v8;
  result = (_DWORD *)sub_181E61B60(a1: 1, a2: 1, a3: v9, a4: v8, a5: v10, a6: v7);
  if ( result != v5 && *result >> 3 != 4261933 )
  {
LABEL_11:
    MEMORY[0x18276FC00](a1: v13, a2: v16, a3: result, a4: v18, a5: v5 + 8523866, a6: v14);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_181E608E0();
  }
  if ( *(int *)(v6 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
