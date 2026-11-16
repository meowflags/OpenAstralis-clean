// sub_184F1A2C0
// rva 0x04f1a2c0  size 191  section .text  group text
// window base 0x184f1a2c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1A2C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // edx
  int v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+8h] [rbp-10h]
  _DWORD *v25; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    return sub_184F1A380(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21, a6: v22, a7);
  }
  else
  {
    v25 = a3;
    if ( a3[1] != 0 )
    {
      ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * (*a3 >> 3) + 272)))(
        a1,
        a2,
        a3,
        a4: a3);
      a3 = v25;
    }
    v10 = (unsigned int)a3[1];
    if ( (_DWORD)v10 != 0
      && (v11 = *(_DWORD *)(v8 + 8 * v10) >> 3, *(__int16 *)(v8 + 8 * v11 + 62) >= 4)
      && *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v11 + 16) + 24) == 87998 )
    {
      v14 = *(_QWORD *)(v8 + 8LL * (*(_DWORD *)(v8 + 8 * v10) >> 3) + 248);
      v24 = v8 + 8 * v10;
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v7 + v14))(a1, a2, a3: v24);
      if ( *(int *)(v9 + 16) <= 0 )
        return MEMORY[0x18277F280](a1: v15, a2: v16, a3: v25, a4: v24);
    }
    else
    {
      v12 = v25;
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280](a1, a2, a3: v25);
      return *((unsigned __int8 *)v12 + 14);
    }
  }
  return result;
}
