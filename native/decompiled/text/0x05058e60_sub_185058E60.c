// sub_185058E60
// rva 0x05058e60  size 459  section .text  group text
// window base 0x185058e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185058E60(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rsi
  void (__fastcall *v10)(__int64, __int64, _DWORD *, _DWORD *, __int64); // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  __int64 v19; // [rsp+0h] [rbp-18h] BYREF
  __int64 v20; // [rsp+8h] [rbp-10h]
  _DWORD *v21; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v5 + 8) )
  {
    v21 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v4
                                        + 8LL * *(unsigned int *)(v4 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44)
                                         & (0x16C0u >> HIBYTE(*(_DWORD *)(v4 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 5824 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v6 + 16) > *(_QWORD *)(v5 + 32) )
    {
      v21 = a3;
      v6 = MEMORY[0x181EAA920](a1, a2, a3: 43315800);
      a3 = v21;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v6 + 16;
      *(_DWORD *)v6 = 43315800;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
    }
    v7 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v7 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v20 = v6;
      v21 = a3;
      v7 = MEMORY[0x181EAA920](a1, a2, a3: 34161576);
      v6 = v20;
      a3 = v21;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v7 + 24;
      *(_DWORD *)v7 = 34161576;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
    }
    *(_DWORD *)(v7 + 8) = 47045786;
    *(_DWORD *)(v6 + 4) = (unsigned __int64)(v7 - v4) >> 3;
    if ( (*(_DWORD *)v6 & 2) != 0 )
    {
      v18 = (v6 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v6 & 0xFFFFFFFFFFF80000LL) + ((v6 - v18) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v6 & 0xFFFFFFFFFFF80000LL) + ((v6 - v18) >> 9) + 0x38) = 0;
    }
    v20 = v7;
    v8 = *a3 >> 3;
    v9 = *(_DWORD *)(v4 + 8 * v8 + 44) & (0x16C0u >> HIBYTE(*(_DWORD *)(v4 + 8 * v8 + 44)));
    v10 = (void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64))(v3
                                                                             + *(_QWORD *)(v4
                                                                                         + 8 * v8
                                                                                         + HIWORD(*(_DWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 8 * v8 + 20) + 4 * v9 + 12))
                                                                                         + 16));
    v21 = a3;
    v10(a1: v6, a2: v9, a3, a4: a3, a5: v6);
    result = MEMORY[0x18580D280](a1: v11, a2: v12, a3: v20);
    if ( *(int *)(v5 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v16, a2: v17, a3: v14, a4: v15, a5: v20);
    return result;
  }
  MEMORY[0x182770780]();
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
  return sub_185059040();
}
