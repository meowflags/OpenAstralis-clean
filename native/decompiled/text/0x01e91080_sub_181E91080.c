// sub_181E91080
// rva 0x01e91080  size 279  section .text  group text
// window base 0x181e91080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E91080()
{
  __int64 v0; // r14
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 i; // rbp
  unsigned int v8; // [rsp+24h] [rbp-34h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h]
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, __int64); // [rsp+48h] [rbp-10h]

  v1 = *(unsigned int *)(v0 + 376654972);
  if ( (_DWORD)v1 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_11;
  }
  v2 = *(_DWORD *)(v0 + 8 * v1) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v0
                                   + 8LL * *(unsigned int *)(v0 + 8 * v2 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v0 + 8 * v2 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v0 + 8 * v2 + 44))))
                                   + 12) != 519 )
  {
LABEL_11:
    MEMORY[0x18276EDE0]();
    goto LABEL_12;
  }
  v3 = *(unsigned int *)(v0 + 8 * v1 + 8);
  result = v0 + 8 * v1;
  if ( (_DWORD)v3 == 0 )
  {
LABEL_12:
    MEMORY[0x18276EFE0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E911A0();
  }
  v5 = *(_QWORD *)(v0 + 8 * v3 + 8);
  if ( v5 != 0 )
  {
    v11 = MEMORY[0x11704030];
    v8 = v3;
    v10 = *(_QWORD *)(v5 + 104);
    result = MEMORY[0x11704030](a1: v0 + 8 * v3, a2: MEMORY[0x11704030], a3: v3, a4: v5);
    for ( i = v10; i != 0; i = v9 )
    {
      v9 = *(_QWORD *)(i + 104);
      result = v11(a1: v6, a2: v11, a3: v9, a4: i);
    }
    v3 = v8;
  }
  *(_QWORD *)(v0 + 8 * v3 + 8) = 0;
  __faststorefence();
  return result;
}
