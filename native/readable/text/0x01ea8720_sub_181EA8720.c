// sub_1EA8720
// rva 0x01ea8720  size 70  section .text  group text
// window base 0x181ea8720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_1EA8720(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  _QWORD *result; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int *v8; // rcx
  _DWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  int v15; // r12d
  int *v16; // r10
  unsigned __int64 v17; // r11
  unsigned int v18; // ebx
  _DWORD *v19; // rdx
  unsigned int v20; // eax
  _DWORD *v21; // rdx
  unsigned int *v22; // rbx
  unsigned int *v23; // rax
  _DWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // [rsp+0h] [rbp-118h]
  unsigned __int64 v33; // [rsp+10h] [rbp-108h]
  unsigned __int64 v34; // [rsp+18h] [rbp-100h]
  unsigned int v35; // [rsp+20h] [rbp-F8h]
  unsigned int v36; // [rsp+24h] [rbp-F4h]
  _DWORD *v37; // [rsp+28h] [rbp-F0h]
  unsigned int v38; // [rsp+B8h] [rbp-60h]
  unsigned int *v39; // [rsp+C0h] [rbp-58h]
  unsigned __int64 v40; // [rsp+C8h] [rbp-50h]
  unsigned int *v41; // [rsp+C8h] [rbp-50h]
  int *v42; // [rsp+D0h] [rbp-48h]
  unsigned int *v43; // [rsp+D8h] [rbp-40h]
  _DWORD *v44; // [rsp+E0h] [rbp-38h]
  unsigned int v45; // [rsp+ECh] [rbp-2Ch]

  result = (_QWORD *)MEMORY[0x11703060]/* 0x11703060 */(a1, a2, a3, a4: 65472);
  if ( result == nullptr )
  {
    sub_28C1C40(a1: v5, a2: v6, a3: v3 + 371345424);
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
    __builtin_debugtrap();
    if ( v9 == (_DWORD *)v3 )
    {
      sub_276EFE0();
    }
    else
    {
      v37 = v9;
      v36 = *v9 >> 3;
      v10 = v36;
      v11 = (unsigned int)*(char *)(v3 + 8LL * v36 + 68);
      v45 = v11;
      v12 = *(unsigned int *)(v7 + 4);
      v35 = *(_DWORD *)(v7 + 4);
      v13 = v3 + 8LL * *(unsigned int *)(v3 + 58177844);
      v34 = v13;
      v14 = v3 + 8LL * *(unsigned int *)(v3 + 58177848);
      v33 = v14;
      if ( (_DWORD)v11 == 1 )
      {
        if ( *(__int16 *)(v3 + 8LL * v36 + 62) >= 2 )
          goto LABEL_17;
        do
        {
          sub_276EAE0();
LABEL_17:
          ;
        }
        while ( *(_DWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 8 * v10 + 16) + 16) != 5732 );
        if ( v9 == (_DWORD *)v3 )
          JUMPOUT(0x303D32D01LL);
        v21 = v9;
        if ( (_DWORD)v12 == 0 )
        {
LABEL_42:
          sub_276EFE0(a1: v14, a2: v13, a3: v21);
          __halt();
        }
        v8 = v9 + 1;
        v22 = v9 + 2;
        v43 = v9 + 2;
        v23 = v9 + 1;
        while ( v22 > v23 )
        {
          v24 = (_DWORD *)(8LL * *v23);
          if ( v24 != nullptr )
            v24 = (_DWORD *)((char *)v24 + v3);
          if ( v24 != nullptr )
          {
            if ( v13 == v3 )
              JUMPOUT(0x303D32D63LL);
            if ( v13 > (unsigned __int64)v24 )
              goto LABEL_28;
            if ( v14 == v3 )
              JUMPOUT(0x303D32DB9LL);
            if ( (unsigned __int64)v24 > v14 )
            {
LABEL_28:
              if ( (unsigned __int64)v24 >= *(_QWORD *)(v3 + 376612552)
                && (unsigned __int64)v24 < *(_QWORD *)(v3 + 376612568) )
              {
                ++v23;
              }
              else
              {
                v41 = v23;
                if ( (*v24 & 1) != 0 )
                {
                  ++v23;
                }
                else
                {
                  v39 = v23 + 1;
                  if ( sub_1EA8F40() != 0 )
                    JUMPOUT(0x303D32DF2LL);
                  v8 = v41;
                  *v41 = 0;
                  v23 = v39;
                  v22 = v43;
                  v14 = v33;
                  v13 = v34;
                }
              }
            }
            else
            {
              ++v23;
            }
          }
          else
          {
            ++v23;
          }
        }
        v12 = v35;
        v11 = 1;
        v10 = v36;
        v9 = v37;
      }
      v32 = v3 + 8 * v12;
      if ( (int)v11 < 4 )
      {
        if ( v9 == (_DWORD *)v3 )
          JUMPOUT(0x303D32842LL);
        v44 = v9;
        v8 = (unsigned int *)*(int *)(v3 + 8 * v10 + 56);
        v15 = *(_DWORD *)(v3 + 4LL * (_QWORD)v8);
        if ( v15 != 0 )
        {
          v8 = (unsigned int *)(v3 + 4LL * (_QWORD)v8);
          v16 = (int *)(v8 + 1);
          v17 = (unsigned __int64)&v8[2 * v15 + 1];
          v40 = v17;
          v18 = v35;
          v19 = v9;
          while ( v17 > (unsigned __int64)v16 )
          {
            v20 = *v16;
            v38 = v16[1];
            v42 = v16 + 2;
            if ( v18 == 0 )
              goto LABEL_41;
            sub_1EA9F00(a1: 4, a2: v9, a3: v32, a4: v38, a5: (char *)v19 + *v16, a6: 1);
            v16 = v42;
            v17 = v40;
            v19 = v44;
            v18 = v35;
            v9 = v37;
          }
          v11 = v45;
        }
      }
      if ( (unsigned int)v11 <= 6 )
        __asm { jmp     r8; switch jump }
    }
    v20 = sub_28C1C40(a1: v14, a2: v13, a3: v3 + 368272040, a4: v8, a5: v9);
LABEL_41:
    sub_276EFE0(a1: v14, a2: v20, a3: v19, a4: v38);
    sub_276EFE0();
    v25 = sub_276EAE0();
    sub_276EFE0(a1: v25 + v27, a2: v26 - 2, a3: v27, a4: *(unsigned __int8 *)(v25 + v26 - 1));
    sub_276EFE0();
    sub_28C1C40(a1: v28, a2: v29, a3: v3 + 370861008);
    sub_28C1C40(a1: v30, a2: v31, a3: v3 + 367049616);
    goto LABEL_42;
  }
  *result = a3;
  return result;
}
