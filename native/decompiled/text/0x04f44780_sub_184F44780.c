// sub_184F44780
// rva 0x04f44780  size 282  section .text  group text
// window base 0x184f44780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F44780(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 result; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v26; // [rsp+8h] [rbp-10h]
  int v27; // [rsp+14h] [rbp-4h]

  v26 = a3;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v8
                                        + 8LL * *(unsigned int *)(v8 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 44)
                                         & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 1384 )
  {
    v10 = *a3 >> 3;
    v11 = *(_DWORD *)(v8 + 8 * v10 + 44) & (0x568u >> HIBYTE(*(_DWORD *)(v8 + 8 * v10 + 44)));
    v12 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v7
                                                                        + *(_QWORD *)(v8
                                                                                    + 8 * v10
                                                                                    + HIWORD(*(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v10 + 20) + 4 * v11 + 12))
                                                                                    + 40)))(
            a1,
            a2: v11,
            a3,
            a4: a3);
    v16 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v16 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v27 = v12;
      v17 = MEMORY[0x181EAA920](a1: v14, a2: v15, a3: 43286816);
      v12 = v27;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v16 + 24;
      *(_DWORD *)v16 = 43286816;
      *(_DWORD *)(v16 + 4) = 0;
      *(_QWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 16) = 0;
      v17 = v16;
    }
    *(_DWORD *)(v17 + 4) = ((unsigned __int64)v26 - v8) >> 3;
    result = MEMORY[0x185967AE0](a1: v14, a2: v15, a3: v17, a4: v13, a5: v12, a6: 16);
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182770780]();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_184F448A0(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24, a7);
}
