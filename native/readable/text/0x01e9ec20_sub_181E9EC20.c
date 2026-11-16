// sub_1E9EC20
// rva 0x01e9ec20  size 935  section .text  group text
// window base 0x181e9ec20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9EC20(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  _DWORD *v8; // rax
  unsigned __int64 v10; // rdi
  __int64 v11; // rsi
  double v12; // xmm0_8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  __int64 v19; // rbp
  int v20; // ebp
  char *v21; // rbp
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rbx
  char v24; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v25; // [rsp+10h] [rbp-18h]
  unsigned __int64 v26; // [rsp+18h] [rbp-10h]
  _DWORD *v27; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v7 + 8) )
  {
    v12 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v24);
    goto LABEL_62;
  }
  v8 = (_DWORD *)(8LL * *(unsigned int *)(a3 + 4));
  if ( v8 != nullptr )
    v8 = (_DWORD *)((char *)v8 + v6);
  if ( *(_BYTE *)(v6 + 376654992) != 0 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      v8 = (_DWORD *)sub_277F280();
    return v8 != nullptr;
  }
  if ( (*v8 & 6) == 4 )
  {
    *(_DWORD *)(a3 + 4) = v8[1];
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      if ( a3 == v6 )
        JUMPOUT(0x303D28E72LL);
      v22 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v22) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v22) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return 1;
  }
  else
  {
    v26 = a3;
    v25 = (unsigned __int64)v8;
    v27 = v8;
    if ( (unsigned int)sub_1E9F320(a1, a2, a3: v8) != 0 )
    {
      v13 = v26;
      if ( v26 == v6 )
        JUMPOUT(0x303D28CA5LL);
      if ( *(_BYTE *)(v6 + 376654992) != 0 )
      {
        if ( v26 == v6 )
          JUMPOUT(0x303D28CD0LL);
        v14 = 8LL * *(unsigned int *)(v6 + 58177844);
        if ( v14 != 0 )
          v14 += v6;
        if ( v14 <= v26 )
        {
          v23 = 8LL * *(unsigned int *)(v6 + 58177848);
          if ( v23 != 0 )
            v23 += v6;
          if ( v26 <= v23 )
          {
            v15 = v25;
LABEL_37:
            if ( v26 == v6 )
              JUMPOUT(0x303D28E31LL);
            if ( (*(_DWORD *)v26 & 1) != 0 )
            {
              v21 = (char *)(v26 - *(_QWORD *)(v26 - 8));
              if ( v26 == v6 )
                JUMPOUT(0x303D28E4CLL);
              v16 = v26;
              if ( v21[48] != 0 )
                v21[48] = 0;
            }
            else
            {
              v16 = v26 - (v26 & 0xFFFFFFFFFFF80000LL);
              if ( *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v16 - 2112) >> 9) + 0x38) != 0 )
                *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v16 - 2112) >> 9) + 0x38) = 0;
            }
            goto LABEL_18;
          }
        }
        v15 = v25;
        if ( *(_QWORD *)(v6 + 376612552) <= v26 )
          JUMPOUT(0x303D28D1FLL);
        v16 = 0;
LABEL_18:
        if ( *(int *)(v7 + 16) <= 0 )
          sub_277F280(a1: v10, a2: v16, a3: v13, a4: v15);
        return 1;
      }
      v15 = v25;
      if ( (*(_DWORD *)v25 & 1) != 0 )
        v18 = v25 - *(_QWORD *)(v25 - 8);
      else
        v18 = v25 & 0xFFFFFFFFFFF80000LL;
      v19 = *(unsigned int *)(v18 + 40);
      v10 = *(_DWORD *)v25 & 6;
      if ( v10 != 6 )
      {
        if ( (*(_DWORD *)v25 & 2) != 0 )
          JUMPOUT(0x303D28DE9LL);
        v16 = 1;
LABEL_33:
        if ( (_DWORD)v16 == 0 )
          goto LABEL_18;
        v20 = *(_DWORD *)v26;
        if ( (*(_DWORD *)v26 & 6) != 6 )
        {
          if ( (v20 & 2) != 0 )
            JUMPOUT(0x303D28E1BLL);
          v16 = 0;
          goto LABEL_18;
        }
        if ( v26 == v6 )
          JUMPOUT(0x303D28F3ELL);
        if ( (v20 & 1) != 0 )
          v10 = v26 - *(_QWORD *)(v26 - 8);
        else
          v10 = v26 & 0xFFFFFFFFFFF80000LL;
        v16 = *(unsigned int *)(v10 + 40);
        if ( (_DWORD)v16 != 0 )
        {
          if ( *(int *)(v6 + 8 * v16 + 48) >= 16 )
            goto LABEL_37;
          goto LABEL_18;
        }
LABEL_63:
        sub_276EFE0(a1: v10, a2: v6 + 8 * v16);
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
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        return sub_1E9EFE0();
      }
      if ( (_DWORD)v19 != 0 )
      {
        v16 = *(_DWORD *)(v6 + 8 * v19 + 48) < 16;
        goto LABEL_33;
      }
LABEL_62:
      sub_276EFE0(a1: v12);
      goto LABEL_63;
    }
    v17 = v26;
    *(_DWORD *)(v26 + 4) = 0;
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280(a1: v10, a2: v11, a3: v17, a4: v25);
    return 0;
  }
}
