// sub_181EA7B00
// rva 0x01ea7b00  size 872  section .text  group text
// window base 0x181ea7b00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EA7B00(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v50; // rbp
  __int64 v51; // rax
  BOOL v52; // eax
  __int64 v53; // rax
  __int64 v54; // rbx
  __int64 v55; // rbp
  __int64 v56; // rbx
  BOOL v57; // ebx
  __int64 v58; // rdx
  __int64 v59; // rdi
  __int64 v60; // rsi

  v3 = v2[94164333];
  if ( (_DWORD)v3 == 0 )
  {
    MEMORY[0x18276EFE0]();
    goto LABEL_38;
  }
  v4 = v2[2 * v3 + 1];
  v5 = (__int64)&v2[2 * v3];
  if ( (_DWORD)v4 == 0 )
  {
LABEL_38:
    MEMORY[0x18276EFE0](a1, a2, a3: v3, a4: v5);
    goto LABEL_39;
  }
  v6 = *(_QWORD *)&v2[2 * v3 + 2];
  if ( v6 != *(_QWORD *)&v2[2 * v4 + 6] )
    goto LABEL_4;
  v50 = *(_QWORD *)&v2[2 * v3 + 6];
  v51 = *(_QWORD *)&v2[2 * v4 + 10];
  if ( v6 == 0 )
  {
    if ( v51 == v50 )
      goto LABEL_22;
LABEL_4:
    sub_181E91800(a1, a2, a3: v5);
    v9 = v2[94164334];
    if ( (_DWORD)v9 != 0 )
    {
      sub_181E91800(a1: v7, a2: v8, a3: (__int64)&v2[2 * v9]);
      v12 = v2[94164335];
      if ( (_DWORD)v12 != 0 )
      {
        sub_181E91800(a1: v10, a2: v11, a3: (__int64)&v2[2 * v12]);
        v15 = v2[94164336];
        if ( (_DWORD)v15 != 0 )
        {
          sub_181E91800(a1: v13, a2: v14, a3: (__int64)&v2[2 * v15]);
          v18 = v2[94164337];
          if ( (_DWORD)v18 != 0 )
          {
            sub_181E91800(a1: v16, a2: v17, a3: (__int64)&v2[2 * v18]);
            v21 = v2[94164338];
            if ( (_DWORD)v21 != 0 )
            {
              sub_181E91800(a1: v19, a2: v20, a3: (__int64)&v2[2 * v21]);
              v24 = v2[94164339];
              if ( (_DWORD)v24 != 0 )
              {
                sub_181E91800(a1: v22, a2: v23, a3: (__int64)&v2[2 * v24]);
                v27 = v2[94164340];
                if ( (_DWORD)v27 != 0 )
                {
                  sub_181E91800(a1: v25, a2: v26, a3: (__int64)&v2[2 * v27]);
                  v30 = v2[94164341];
                  if ( (_DWORD)v30 != 0 )
                  {
                    sub_181E91800(a1: v28, a2: v29, a3: (__int64)&v2[2 * v30]);
                    v33 = v2[94164342];
                    if ( (_DWORD)v33 != 0 )
                    {
                      sub_181E91800(a1: v31, a2: v32, a3: (__int64)&v2[2 * v33]);
                      v36 = v2[94164343];
                      if ( (_DWORD)v36 != 0 )
                      {
                        sub_181E91800(a1: v34, a2: v35, a3: (__int64)&v2[2 * v36]);
                        v39 = v2[94164344];
                        if ( (_DWORD)v39 != 0 )
                        {
                          sub_181E91800(a1: v37, a2: v38, a3: (__int64)&v2[2 * v39]);
                          v42 = v2[94164345];
                          if ( (_DWORD)v42 != 0 )
                          {
                            sub_181E91800(a1: v40, a2: v41, a3: (__int64)&v2[2 * v42]);
                            v45 = v2[94164346];
                            if ( (_DWORD)v45 != 0 )
                            {
                              sub_181E91800(a1: v43, a2: v44, a3: (__int64)&v2[2 * v45]);
                              v48 = v2[94164347];
                              if ( (_DWORD)v48 != 0 )
                              {
                                sub_181E91800(a1: v46, a2: v47, a3: (__int64)&v2[2 * v48]);
                                return 1;
                              }
                              goto LABEL_52;
                            }
LABEL_51:
                            MEMORY[0x18276EFE0]();
LABEL_52:
                            MEMORY[0x18276EFE0]();
LABEL_53:
                            MEMORY[0x18276F0E0](a1, a2, a3: v3, a4: v5);
LABEL_54:
                            MEMORY[0x18276EFE0](a1, a2, a3: v3, a4: v5);
LABEL_55:
                            MEMORY[0x18276EFE0](a1, a2, a3: &v2[2 * v3], a4: v5);
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
                            return sub_181EA7E80(a1: v59, a2: v60, a3: v58);
                          }
LABEL_50:
                          MEMORY[0x18276EFE0]();
                          goto LABEL_51;
                        }
LABEL_49:
                        MEMORY[0x18276EFE0]();
                        goto LABEL_50;
                      }
LABEL_48:
                      MEMORY[0x18276EFE0]();
                      goto LABEL_49;
                    }
LABEL_47:
                    MEMORY[0x18276EFE0]();
                    goto LABEL_48;
                  }
LABEL_46:
                  MEMORY[0x18276EFE0]();
                  goto LABEL_47;
                }
LABEL_45:
                MEMORY[0x18276EFE0]();
                goto LABEL_46;
              }
LABEL_44:
              MEMORY[0x18276EFE0]();
              goto LABEL_45;
            }
LABEL_43:
            MEMORY[0x18276EFE0]();
            goto LABEL_44;
          }
LABEL_42:
          MEMORY[0x18276EFE0]();
          goto LABEL_43;
        }
LABEL_41:
        MEMORY[0x18276EFE0]();
        goto LABEL_42;
      }
LABEL_40:
      MEMORY[0x18276EFE0]();
      goto LABEL_41;
    }
LABEL_39:
    MEMORY[0x18276EFE0]();
    goto LABEL_40;
  }
  a2 = v6 + *(_QWORD *)(v6 + 32);
  v52 = v51 != v50;
  if ( *(_QWORD *)&v2[2 * v3 + 4] != a2 )
    JUMPOUT(0x303D31D2ELL);
  v3 = v52;
  if ( v52 )
    goto LABEL_4;
LABEL_22:
  v53 = 1;
  while ( (int)v53 < 15 )
  {
    if ( (unsigned int)v53 >= 0xF )
      goto LABEL_53;
    v3 = v2[v53 + 94164333];
    if ( (_DWORD)v3 == 0 )
      goto LABEL_54;
    v54 = v2[2 * v3 + 1];
    if ( (_DWORD)v54 == 0 )
      goto LABEL_55;
    v55 = *(_QWORD *)&v2[2 * v3 + 2];
    if ( v55 != *(_QWORD *)&v2[2 * v54 + 6] )
      goto LABEL_4;
    a2 = *(_QWORD *)&v2[2 * v3 + 6];
    v56 = *(_QWORD *)&v2[2 * v54 + 10];
    v53 = (unsigned int)(v53 + 1);
    if ( v55 != 0 )
    {
      a1 = v55 + *(_QWORD *)(v55 + 32);
      v57 = v56 != a2;
      if ( *(_QWORD *)&v2[2 * v3 + 4] != a1 )
        JUMPOUT(0x303D31DC5LL);
      v3 = v57;
      if ( v57 )
        goto LABEL_4;
    }
    else if ( v56 != a2 )
    {
      goto LABEL_4;
    }
  }
  return 0;
}
